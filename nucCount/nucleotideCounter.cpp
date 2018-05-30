#include <iostream>
#include <string>

using namespace std;

int *baseCounter(string bases) {
	static int count[4];
	int a = 0;
	int c = 0;
	int g = 0;
	int t = 0;
	int size = bases.size();
	int i = 0;
	// cout << "DNA is " << bases << endl;

	while (i < size) {
		if (bases[i] == 'A') {
			a++;
		}

		else if (bases[i] == 'C') {
			c++;
		}

		else if (bases[i] == 'G') {
			g++;
		}

		else if (bases[i] == 'T') {
			t++;
		}

		else {
			cout << "There seems to a character in the string at index " << i << ", which is " << bases[i] << ", that is not a nucleobase.\nPlease fix this and try again." << endl;
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
	string dna;

	int *counter;
	
	cout << "Enter a string of nucleobases: " << endl;
	cin >> dna;

	// cout << "DNA is " << dna << endl;
	counter = baseCounter(dna);
	cout << "The count results are:\n" << counter[0] << " " << counter[1] << " " << counter[2] << " " << counter[3] << endl;

	return 0;
}