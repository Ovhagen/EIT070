#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>


int main() {
  int b;
  int8_t c;
    //Random number between 0-7
  srand(time(0));
  b = rand() % 8;
  //Sets to zero with bitwise AND while shifting the 1
  //so the correct spot with left shift
  c = c|= 1 << (b-1);
  printBits(c);

  printf("The random number was: %d\n", b);
  return 0;
}

void printBits(unsigned int num){
    unsigned int size = sizeof(unsigned int);
    unsigned int maxPow = 1<<(size*8-1);
    int i=0;
    for(;i<size*8;++i){
        // print last bit and shift left.
        printf("%u ",num&maxPow ? 1 : 0);
        num = num<<1;
    }
}
