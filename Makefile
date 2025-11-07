CC=gcc

all: \
	problems/001.o \
	problems/002.o \
	problems/003.o

problems/%.o: $(wildcard problems/*.c)
	@echo "Compiling $(basename $@)"
	@$(CC) $(basename $@).c -o $(basename $@).o -fsanitize=undefined -Werror -Wall || (echo "$(basename $@) did not compile successfully!"; exit 1)
	@echo "Running $(basename $@)"
	@./$(basename $@).o > current_output 2>&1 || (echo "$(basename $@) did not run successfully!"; rm $(basename $@).o; exit 1)
	@echo "Comparing output from $(basename $@)"
	@diff current_output result/$(basename $@) || (echo "The output of $(basename $@) is incorrect!"; rm $(basename $@).o; exit 1)

clean:
	rm problems/*.o
