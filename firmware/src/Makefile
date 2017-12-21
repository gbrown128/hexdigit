# Programmer Setup
FLASHTOOL = avrdude
FLASHTOOLFLAGS = -c avrisp -P /dev/ttyACM0 -p attiny1634 -b 115200

# Compilation Setup
PREFIX = avr-
CC = $(PREFIX)gcc
OBJCOPY = $(PREFIX)objcopy
CFLAGS = -O3 -Wall -mmcu=attiny1634
CPPFLAGS = -DF_CPU=8000000
SIZE = $(PREFIX)size

# Make Setup

MAKE_FLAGS += -j4

# Default Rules

default: flash

flash: main.hex
	$(FLASHTOOL) $(FLASHTOOLFLAGS) -U flash:w:main.hex

main.hex: main
	avr-objcopy main -O ihex main.hex

main: main.o hardware.o display.c
	$(CC) $(CFLAGS) -o main main.o hardware.o display.c
	$(SIZE) main

clean:
	rm -f *.o
	rm -f main.hex
	rm -f main
