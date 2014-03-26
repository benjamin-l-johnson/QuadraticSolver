LINK_TARGET= QUADEXE

all:
	cd src; make

tests:
	cd tests; make

clean:
	cd src; make clean
	rm $(LINK_TARGET)

debug:
	cd src; make debug

run:
	./$(LINK_TARGET)
<<<<<<< HEAD
=======

>>>>>>> f242b4d46e189317154e32c7d7194642217235ef
