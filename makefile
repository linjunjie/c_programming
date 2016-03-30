CC = cc

targets = ncurses

all : $(targets)

ncurses : ncurses.c
	$(CC) -o ncurses -lncurses -std=c99 ncurses.c

clean : 
	rm -rf *o $(targets)