# Here is a simple Make Macro.
LINK_TARGET = ../QUADEXE
CC				= gcc
CFLAGS	= -g -Wall
DEPS = quadratic.h


MAIN = quadratic.c

SRCS = $(MAIN) quadlow.c quadmid.c 
OBJS	= ${SRCS:.c=.o}


all : $(LINK_TARGET)

$(LINK_TARGET) : $(OBJS)
	$(CC) -o $@ $^ -lm

%.o: %.c
	gcc $(CFLAGS) -c $*.c -o $*.o 

debug :
	gdb $(LINK_TARGET)


clean : 
	rm -f *.o
	echo Clean done

#http://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html
