CSMITH = /home/giulianob/bagunca/csmith/build/src/csmith
CSMITH_FLAGS=
OUTDIR=

check:
	sh check_generated.sh

%:
	$(MAKE) $@.c

%.c:
	$(CSMITH) $(CSMITH_FLAGS) \
		--max-funcs $(word 1,$(subst ., ,$@)) > $@


clean:
	rm -f *.c
