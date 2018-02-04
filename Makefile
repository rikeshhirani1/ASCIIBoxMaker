CFLAGS = -g -Wall
ALL: main.c
	$(CC) $(CFLAGS) -o draw main.c

