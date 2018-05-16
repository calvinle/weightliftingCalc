CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall
OBJS = main.o calc.o
INCLUDE = -I.

all : $(OBJS)
	$(CC) $(OBJS) $(INCLUDE) $(LFLAGS) -o wlCalc

main.o : main.cpp calc.h
	$(CC) main.cpp $(INCLUDE) $(CFLAGS)

calc.o	:	calc.cpp calc.h
	$(CC) calc.cpp $(INCLUDE) $(CFLAGS)

clean:
	-rm *.o demo
