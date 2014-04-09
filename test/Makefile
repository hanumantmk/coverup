default: all

test: example test.sh
	./test.sh

all: example

example: example.c libexample.c libexample.h Makefile
	gcc -Wall -Werror -ggdb3 -O0 --coverage example.c libexample.c -o example

clean:
	rm -f *.gcda *.gcno example
	rm -rf arcs
