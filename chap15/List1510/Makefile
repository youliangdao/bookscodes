CC = gcc
PGNAME = mainapp
OBJS = misaki.o akagi.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

akagi.o: akagi.c
	$(CC) -c -o $@ $<

misaki.o: misaki.c
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f mainapp akagi.o misaki.o
