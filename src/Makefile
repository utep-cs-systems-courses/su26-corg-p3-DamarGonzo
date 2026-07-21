COMMON_OBJECTS =

CPU = msp430g2553

CFLAGS = -mmcu=${CPU} -Os -I../lcdLib -I../timerLib

all: game.elf

game.elf: main.o switches.o stateMachines.o wdt_handler.o
	msp430-elf-gcc ${CFLAGS} -L../lcdLib -L../timerLib \
	main.o switches.o stateMachines.o wdt_handler.o \
	-llcd -ltimer -o game.elf

clean:
	rm -f *.o *.elf
