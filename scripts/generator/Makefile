CSMITH = csmith
CSMITH_FLAGS=
OUTDIR=

all:
	bash generate.sh

#%.c:
%:
	$(CSMITH) $(CSMITH_FLAGS) --max-funcs $@ > generated/$@.c

clean:
	rm -f generated/*.c
