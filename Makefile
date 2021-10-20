
CC = gcc

OBJS = main.o input.o draw.o init.o

all: main clean

main: $(OBJS)
	$(CC) -o $@ $^ -lcurses -I.

%.o: %.c
	$(CC) -c $^ -o $@

clean: 
	rm -rf *.o
