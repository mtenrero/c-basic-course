#include <stdio.h>

// In C language there is no String type
// It is represented with arrays of chars

// It is obligatory to specify its maximum length
// DON'T DO THIS char string[];
// DO THIS char string[20];

// They requires to end with the \0 character

int main() {
  // Following lines represents the same initialization
  char string1[] = {'E', 'x', 'a', 'm', 'p', 'l', 'e', '\0'};
  char string2[8] = {'E', 'x', 'a', 'm', 'p', 'l', 'e', '\0'};
  char string3[] = "Example";
  char string4[8] = "Example";

  // Printing strings with %s (no %c)
  printf("string1 %s \n", string1);
  printf("string2 %s \n", string2);
  printf("string3 %s \n", string3);
  printf("string4 %s \n", string4);

  // Reading strings
  printf("Type any string < 20 chars: ");
  char string[20];
  scanf("%s", string);
  printf("result: %s", string);
}