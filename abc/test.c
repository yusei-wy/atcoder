#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *chars;
  int len = 5;
  chars = malloc(len + 1);
  memcpy(&chars[0], "hello", len);
  chars[len] = '\0';

  printf("%s\n", chars);
}
