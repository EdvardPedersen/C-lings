CC=gcc

all: \
	problems/001_hello.o \
	problems/002_include.o \
	problems/003_unsigned.o \
    problems/004_const.o \
    problems/005_variables.o \
    problems/006_conditions.o \
    problems/007_conditions2.o \
	problems/008_types.o \
	problems/009_types2.o \
	problems/010_while.o \
	problems/011_for.o \
	problems/012_function.o \
	problems/013_array.o \
	problems/014_struct.o

problems/%.o: $(wildcard problems/*.c)
	@echo "Compiling $(basename $@)"
	@$(CC) $(basename $@).c -o $(basename $@).o -fsanitize=undefined -Werror -Wall -std=c23 || (echo "$(basename $@) did not compile successfully!"; exit 1)
	@echo "Running $(basename $@)"
	@timeout --preserve-status 3 ./$(basename $@).o > current_output 2>&1 || (echo "$(basename $@) did not run successfully!"; rm $(basename $@).o; exit 1)
	@echo "Comparing output from $(basename $@)"
	@diff current_output result/$(basename $@) || (echo "The output of $(basename $@) is incorrect!"; rm $(basename $@).o; exit 1)

clean:
	rm problems/*.o
