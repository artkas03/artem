targets = main.bin main5.1.bin main5.2.bin main5.3.bin main5.4.bin main5.5.bin main6.1.bin
CC=gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wuninitialized -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main.bin main5.1.bin main5.2.bin main5.3.bin main5.4.bin main5.5.bin main6.1.bin
main.bin: lab07/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main5.1.bin: lab07/main5.1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main5.2.bin: lab07/main5.2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main5.3.bin: lab07/main5.3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main5.4.bin: lab07/main5.4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main5.5.bin: lab07/main5.5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
main6.1.bin: lab07/main6.1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/main.bin
	./dist/main5.1.bin
	./dist/main5.2.bin
	./dist/main5.3.bin
	./dist/main5.4.bin
	./dist/main5.5.bin
	./dist/main6.1.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

