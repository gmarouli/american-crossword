#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/utils.h"
#include "headers/dictionary.h"

int main(int argc, char *argv[]) {
	char *words, *crossword;

	if (argc < 2) {
		printf("Missing arguments: $solve <crossword-puzzle> [word-input]\n");
		return -1;
	}
	crossword = argv[1];
	if (argc == 3) {
		words = argv[2];
		printf("Reading from alternative file %s\n", words);
	}
	else {
		words = "input/word.txt";
	}
	printf("Going to solve %s using %s!\n", crossword, words);

	parseDictionary(words);
	return 0;
}
