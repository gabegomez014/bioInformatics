default: program

nucCount.o:
	gcc -c nucleotideCounter.c -o nucleotideCounter.o

nucCount: nucCount.o
	gcc nucleotideCounter.o -o nucleotideCounter

clean: 
	-rm -f nucleotideCounter.o
	-rm -f nucleotideCounter