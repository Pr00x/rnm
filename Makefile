CC=gcc

install:
	$(CC) rnm.c -o /usr/bin/rnm
clean:
	rm -f /usr/bin/rnm
