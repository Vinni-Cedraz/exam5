files = main.cpp \
		Warlock.cpp

all:
	clear & c++ -Wall -Wextra -Werror $(files) -std=c++98 -I ./

run: all
	./a.out | cat -e

clean:
	rm -f a.out
