#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printBits(int size, int val);

int main() {
  char b;

 //Flip all bits to ones
  b= ~(b&0);

  printBits(sizeof(b), b);

//  b = b&=3;
  //Set to zero with bitwise OR while shifting the 0
  //to the fifth position
  b|= 1 << 4;


  b^=4;

  printBits(sizeof(b), b);

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
