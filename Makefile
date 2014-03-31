LINK_TARGET= QUADEXE

all:
	cd tests; make
	cd src; make

tests:
	cd tests; make
	./tests

clean:
	cd src; make clean
	rm $(LINK_TARGET)

debug:
	cd src; make debug

run:
	./$(LINK_TARGET)

