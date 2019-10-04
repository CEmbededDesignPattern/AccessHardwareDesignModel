SUBDIR=$(shell ls -l . | awk '/^d/ {print $$NF}')

all:${SUBDIR}

${SUBDIR}:ECHO
	@echo begin compile $@...
	make -C $@
	@echo done
	@echo
ECHO:
	@echo we will compile $(SUBDIR) projects
	@echo
	
PHONY:clean all

clean:
	@for var in $(SUBDIR);\
	do\
		echo begin clean $$var project...;\
		make clean -C $$var;\
		echo done;\
		echo ;\
	done
