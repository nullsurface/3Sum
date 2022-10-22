CC = gcc
CFLAGS = -Wall 
OBJS = main.o 3Sum.o list.o

all: 3Sum

3Sum:	$(OBJS)
		$(CC) $(CFLAGS) $^ -o 3Sum

main.o: main.c 3Sum.h
		$(CC) -c $(CFLAGS) main.c

3Sum.o: 3Sum.c 3Sum.h list.h
		$(CC) -c $(CFLAGS) 3Sum.c

list.o: list.c list.h
		$(CC) -c $(CFLAGS) list.c


clean:
		rm -rf *.o 3Sum
