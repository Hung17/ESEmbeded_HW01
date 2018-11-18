CC = gcc
CFLAGS = -Wall

all: main.elf printatoz.elf

main.elf: main.c
	$(CC) $(CFLAGS) main.c -o main.elf

printatoz.elf: printatoz.c
	$(CC) $(CFLAGS) printatoz.c -o printatoz.elf

clean:
	rm -f *.o *.elf
