/*

	Title: DNA to RNA

	Author: Gabriel Alexis Gomez

	Date: Apr 24, 2019

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Found this function on StackOverflow: 
https://stackoverflow.com/questions/32496497/standard-function-to-replace-character-or-substring-in-a-char-array
*/

char* replace_char(char* str, char find, char replace){
    char *current_pos = strchr(str,find);
    while (current_pos){
        *current_pos = replace;
        current_pos = strchr(current_pos,find);
    }
    return str;
}


int main(int argc, char const *argv[]) {
	char str[1000];
	char strRes[1000];

	printf("Enter a string: ");
	fgets(str, 1000, stdin);
	// printf("DNA is %s", dna);

	// strRes = replace_char(str, 'a', 'b');
	printf("The str results is:\n");

	printf("%s\n", replace_char(str, 'T', 'U'));

	return 0;
}

