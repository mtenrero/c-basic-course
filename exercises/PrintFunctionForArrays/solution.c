#include <stdio.h>

void printSimpleArray(int len, int array[]) {
  for (int position = 0; position < len; position++) {
    printf("%c ", array[position]);
  }
}

int main() {
  int arrayToPrint[] = {'a','b','c','d','e','f'};
  printSimpleArray(6, arrayToPrint);
}