mainapp: misaki.o akagi.o
	gcc -o mainapp misaki.o akagi.o

akagi.o: akagi.c
	gcc -c -o akagi.o akagi.c

misaki.o: misaki.c
	gcc -c -o misaki.o misaki.c

.PHONY: clean
clean:
	rm -f mainapp akagi.o misaki.o
