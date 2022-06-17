#include <stdio.h>

int main() {
  char character; // Save charecter in this variable
  printf("Enter one character...");
  scanf("%c", &character); // %s stores / reads characters, & means value

  printf("You typed the %c char", character);
}