#include <stdio.h>
#include <string.h>

int main() {
  char string[] = "ExampleString";

  // Get String length
  int len = strlen(string);
  printf("The string %s variable has %d characters\n", string, len);

  // Strings cannot be copied with assignations
  // DON'T DO THIS: char string1[] = string2
  char stringCopy[30];
  strcpy(stringCopy, string);
  printf("StringCopy value: %s\n", stringCopy);

  // Concat Strings
  strcat(string, stringCopy);
  printf("Concat value: %s\n", string);

  // Compare Strings
  // DON'T DO THIS str1 == str2
  int eq1 = strcmp(string, stringCopy);
  printf("strcmp(string, stringCopy)? %d \n", eq1);

  int eq2 = strcmp(string, string);
  printf("strcmp(string, string)? %d \n", eq2);

}