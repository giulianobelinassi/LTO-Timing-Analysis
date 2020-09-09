#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

static int
tokenize (char *string, char *argv[])
{
  char *p;
  int i = 0;

  argv[i++] = strtok (string, " ");

  while (p = strtok (NULL, " "))
    argv[i++] = p;

  argv[i] = NULL;

  return i;
}


extern int32_t
process_launch (const char *path, char *args)
{
  pid_t pid;
  int ret = 0;

  pid = fork ();
  if (pid == 0)
    {
      char *argv[1024];
      int n = tokenize (args, argv);

      execv (path, argv);

      fprintf (stderr, "execv failed to launch program\n");
      abort ();
    }
  else
    {
      int wstatus, ret;
      ret = waitpid (pid, &wstatus, 0);

      if (ret < 0)
	{
	  fprintf (stderr, "Unable to wait child %d to finish", pid);
	  ret = 1;
	}
      else if (WIFEXITED (wstatus))
	{
	  if (WEXITSTATUS (wstatus) != 0)
	    {
	      fprintf (stderr, "Child %d exited with error", pid);
	      ret = 1;
	    }
	}
      else if (WIFSIGNALED (wstatus))
	{
	  fprintf (stderr, "Child %d aborted with error", pid);
	  ret = 1;
	}
    }

  return ret;
}
