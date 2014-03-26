# Here is a simple Make Macro.
LINK_TARGET = ../QUADEXE
CC				= gcc
<<<<<<< HEAD
CFLAGS	= -g -Wall
DEPS = quadratic.h
=======
CFLAGS	= -g
DEPS = calc_quad.h
>>>>>>> d51f295... Added logging, and a debug mode type thing, still no mock objects just yet but I very much redid the structure and renamed the files only I don't think I made them any eaiser to read but what ever


MAIN = calc_main.c

SRCS = $(MAIN) calc_quad.c calc_utils.c 
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
