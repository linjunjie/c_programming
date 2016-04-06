CC = cc

targets = ncurses \
			memmove

all : $(targets)

ncurses : ncurses.c
	$(CC) -o ncurses -lncurses -std=c99 ncurses.c

memmove : memmove.c
	$(CC) -o memmove memmove.c

clean :
	rm -rf *o $(targets)