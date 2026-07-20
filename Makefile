CC=gcc

BUILD := out
PROBLEM-FILES := $(patsubst problems/%.c,$(BUILD)/%.o,$(wildcard problems/*.c))

.PHONY: init reset clean

all: $(PROBLEM-FILES)

init:
	@mkdir -p problems
	@mkdir -p $(BUILD)
	python src/scripts/fix_order.py src/problems problems


$(BUILD)/%.o: problems/%.c
	@echo "Compiling $(basename $@)"
	@$(CC) $< -o $@ -Iincludes -fsanitize=undefined -Werror -Wall -std=c23 || (echo "$(basename $@) did not compile successfully!"; exit 1)
	@echo "Running $(basename $@)"
	@timeout --preserve-status 3 $@ Hello World > current_output 2>&1 || (cat current_output; echo "$(basename $@) did not run successfully!"; rm $@; exit 1)
	@echo "Comparing output from $(basename $@)"
	@diff current_output src/results/$(word 2, $(subst _, , $(basename $(notdir $@)))) || (echo "The output of $(basename $@) is incorrect!"; rm $@; exit 1)

reset: clean init

clean:
	rm -rf problems/ current_output $(BUILD)
