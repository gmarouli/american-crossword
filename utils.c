#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* allocate_string(char* str) {
  char *new_str;
  int size = strlen(str) + 1;
	new_str = malloc(size);
	strncpy(new_str, str, size);
  return new_str;
}
