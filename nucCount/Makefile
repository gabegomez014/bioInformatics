nucCountC.o:
	gcc -c nucleotideCounter.c -o nucleotideCounter.o

nucCountC: nucCount.o
	gcc nucleotideCounter.o -o nucleotideCounterC

nucCountCpp:
	c++ nucleotideCounter.cpp -o nucleotideCounterCpp

nucCountJava:
	javac nucleotideCounter.java

clean: 
	-rm -f nucleotideCounter.o
	-rm -f nucleotideCounterC
	-rm -f nucleotideCounterCpp
	-rm -f nucleotideCounter.class