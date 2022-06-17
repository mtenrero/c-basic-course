#include <stdio.h>
#include <ctype.h>

int main() {
  char c = 'u';

  printf("lowercase: %c \n", tolower(c));
  printf("uppercase: %c \n", toupper(c));

  printf("isLower %d \n", islower(c));
  printf("isUpper %d \n", isupper(c));
}