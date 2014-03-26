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
<<<<<<< HEAD
	./$(LINK_TARGET)
>>>>>>> d51f295... Added logging, and a debug mode type thing, still no mock objects just yet but I very much redid the structure and renamed the files only I don't think I made them any eaiser to read but what ever
=======
	./$(LINK_TARGET)
>>>>>>> testing
