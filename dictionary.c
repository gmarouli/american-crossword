#include <stdio.h>
#include <string.h>
#include "headers/dictionary.h"
#include "headers/utils.h"

#define MAXCHAR 200
#define MAXDICTSIZE 30000

int parseDictionary(char* filename) {
  FILE *fp;
  char str[MAXCHAR];
  char*** dictionary;
  char* initial_list[MAXDICTSIZE];

  fp = fopen(filename, "r");
  if (fp == NULL){
      printf("Could not open file %s",filename);
      return -1;
  }
  int i = 0;
  int max_word_length = 0;
  while (fgets(str, MAXCHAR, fp) != NULL && i < MAXDICTSIZE) {
    initial_list[i] = allocate_string(str);
    int length = strlen(initial_list[i]);
    if (length > max_word_length) {
      max_word_length = length;
    }
    i ++;
  }
  if (i == MAXDICTSIZE && fgets(str, MAXCHAR, fp) != NULL) {
    printf("WARNING: Reached the maximum dictionary size, stopped reading before the end.");
  }
  fclose(fp);
  int word_count_per_size[max_word_length + 1];
  for (i = 0; i < max_word_length; i++) {
    
  }
  return 0;
}
