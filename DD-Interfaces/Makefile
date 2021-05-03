CC=gcc
EXEC=TablasDeConversion
TEST=ConversionTest
CFLAGS=-std=c18 -Wall
all: main test
main:
	$(CC) $(EXEC).c Conversion.c -o $(EXEC) $(CFLAGS)
test:
	$(CC) $(TEST).c Conversion.c -o $(TEST) $(CFLAGS)
clean:
	rm -rf *.o $(EXEC)