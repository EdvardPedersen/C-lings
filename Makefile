CC=gcc

all: $(patsubst %.c,%.o,$(wildcard problems/*.c))

problems/%.o: problems/%.c
	@echo "Compiling $(basename $@)"
	@$(CC) $(basename $@).c -o $(basename $@).o -fsanitize=undefined -Werror -Wall -std=c23 || (echo "$(basename $@) did not compile successfully!"; exit 1)
	@echo "Running $(basename $@)"
	@timeout --preserve-status 3 ./$(basename $@).o > current_output 2>&1 || (echo "$(basename $@) did not run successfully!"; rm $(basename $@).o; exit 1)
	@echo "Comparing output from $(basename $@)"
	@diff current_output result/$(basename $@) || (echo "The output of $(basename $@) is incorrect!"; rm $(basename $@).o; exit 1)

clean:
	rm -f problems/*.o current_output
