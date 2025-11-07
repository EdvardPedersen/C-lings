CC=gcc

all: \
	problems/001.o \
	problems/002.o \
	problems/003.o \

problems/%.o: $(wildcard problems/*.c)
	@$(CC) $(basename $@).c -o current_program -fsanitize=undefined -Werror -Wall
	@./current_program > current_output 2>&1 || exit 1
	@diff current_output result/$(basename $@) || exit 1
