# build an executable named myprog from myprog.c
all: solve.c headers/utils.h utils.c dictionary.c headers/dictionary.h
	gcc solve.c utils.c headers/utils.h dictionary.c headers/dictionary.h -o solve

clean:
	$(RM) myprog
