LINK_TARGET= QUADEXE

all:
	cd src; make

tests:
	cd tests; make

clean:
	cd src; make clean
	rm $(LINK_TARGET)
