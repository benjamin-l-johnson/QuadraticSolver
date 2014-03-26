LINK_TARGET = ../QUADEXE
CC				= gcc
CFLAGS	= -g
DEPS = calc_quad.h


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