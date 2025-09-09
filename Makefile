CC=gcc

all: problems/001.o

problems/%.o: $(wildcard problems/*.c)
	$(CC) $(basename $@).c -fsanitize=undefined
	./a.out > problem_output
	diff problem_output result/$(basename $@)
