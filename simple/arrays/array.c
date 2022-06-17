#include <stdio.h>

int main() {
  int array[] = {0,1,2,3,4};

  // CANNOT BE PRINTED USING PRINTF
  // DON'T DO THIS
  printf("%d", array); // Execute to see what happens, it returns address of first element
}