nucCountC.o:
	gcc -c nucleotideCounter.c -o nucleotideCounter.o

nucCountC: nucCount.o
	gcc nucleotideCounter.o -o nucleotideCounterC

nucCountCpp:
	c++ nucleotideCounter.cpp -o nucleotideCounterCpp

clean: 
	-rm -f nucleotideCounter.o
	-rm -f nucleotideCounterC
	-rm -f nucleotideCounterCpp