# Here is a simple Make Macro.
LINK_TARGET = tests
CC				= gcc
CFLAGS	= -g
DEPS = ../src/calc_quad.h cunit.h 


MAIN = t2.c

SRCS = $(MAIN) ../src/calc_quad.c mock_calc_quad.c cunit.c

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

