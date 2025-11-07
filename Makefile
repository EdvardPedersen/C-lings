CC=gcc

all: \
	problems/001.o \
	problems/002.o \
	problems/003.o \

problems/%.o: $(wildcard problems/*.c)
	$(CC) $(basename $@).c -fsanitize=undefined -Werror -Wall
	./a.out > problem_output 2>&1 || exit 1
	diff problem_output result/$(basename $@) || exit 1
