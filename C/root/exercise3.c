#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printBits(int size, int val);

int main() {
  int b;
  char c;

  //Random number between 0-7
  srand(time(0));
  b = 1 + rand() % 8;

  //Set to zero with bitwise OR while shifting the 1
  //so the correct spot with left shift
   c|= 1 << (b-1);

  printBits(sizeof(c), c);

  printf("The random number was: %d\n", (b-1));
  return 0;
}

void printBits(int size, int val){
  printf("%d\n %d\n", size, val);
    unsigned int maxPow = 1 << (size * 8 - 1);

    for(int i = 0; i < size * 8; ++i){
        // print last bit and shift left.
        printf("%u", val & maxPow ? 1 : 0);
        val = val << 1;
    }

    printf("\n");
}
