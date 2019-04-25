#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string ToRna(string bases) {

	size_t pos = 0;
	while ((pos = bases.find(search, pos)) != string::npos) {
         bases.replace(pos, 1, replace);
         pos += 1;
    }

	return bases;
}

// std::string ReplaceString(std::string subject, const std::string& search,
//                           const std::string& replace) {
//     size_t pos = 0;
//     while ((pos = subject.find(search, pos)) != std::string::npos) {
//          subject.replace(pos, search.length(), replace);
//          pos += replace.length();
//     }
//     return subject;
// }

int main(int argc, char const *argv[]) {
	string dna;

	string rna;
	
	cout << "Enter a string of nucleobases: " << endl;
	cin >> dna;

	rna = ToRna(dna);
	cout << "RNA:\n" << rna << endl;

	return 0;
}