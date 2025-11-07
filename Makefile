CC=gcc

all: \
	problems/001.o \
	problems/002.o \
	problems/003.o \

problems/%.o: $(wildcard problems/*.c)
	@echo "Compiling $(basename $@)"
	@$(CC) $(basename $@).c -o current_program -fsanitize=undefined -Werror -Wall
	@echo "Running $(basename $@)"
	@./current_program > current_output 2>&1 || exit 1
	@echo "Comparing output from $(basename $@)"
	@diff current_output result/$(basename $@) || exit 1
