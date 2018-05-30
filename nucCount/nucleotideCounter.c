/*

	Title: Nucleotide Counter

	Author: Gabriel Alexis Gomez

	Date: May 29, 2018

*/
#include <stdio.h>
#include <string.h>

int * baseCounter(char *bases) {
	static int count[4];
	int i = 0;
	int a = 0;
	int c = 0;
	int t = 0;
	int g = 0;
	int length = strlen(bases);
	// printf("DNA is %s", bases);

	while (i < length - 1) {
		// printf("Current char: %c\n", bases[i]);
		if (bases[i] == 'A') {
			a++;
		}

		else if (bases[i] == 'T') {
			t++;
		}

		else if (bases[i] == 'G') {
			g++;
		}

		else if (bases[i] == 'C') {
			c++;
		}

		else {
			printf("There seems to a character in the string at index %i, which is %c, that is not a nucleobase.\nPlease fix this and try again",i, bases[i]);
			return NULL;
		}

		i++;
	}

	count[0] = a;
	count[1] = c;
	count[2] = g;
	count[3] = t;

	return count;
}

int main(int argc, char const *argv[]) {
	char dna[1000];
	int *counter;

	printf("Enter a string of nucleobases: ");
	fgets(dna, 1000, stdin);
	// printf("DNA is %s", dna);

	counter = baseCounter(dna);
	printf("The count results are:\n");

	for (int i = 0; i < 4; i++) {
		printf("%d\n", counter[i]);
	}

	return 0;
}

