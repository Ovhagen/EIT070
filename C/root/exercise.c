#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printBits(int size, int val);

int main() {
unsigned int x = 0x00000000;
unsigned int number = 0x000FF000;

printf("Pre shift\n");
printBits(sizeof(number), number);
printBits(sizeof(x), x);

int i;

for(i=0; i < 32; ++i){
    if(number & 1 == 1){
        x++;
    }
    number = number >> 1;
    x = x << 1;
    printBits(sizeof(number), number);
    printBits(sizeof(x), x);
}

printf("Post shift\n");
printBits(sizeof(number), number);
printBits(sizeof(x), x);

if(number == x){
    printf("True");
}else{
    printf("False");
}

  return 0;
}

void printBits(int size, int val){
  //printf("%d\n %d\n", size, val);
    unsigned int maxPow = 1 << (size * 8 - 1);

    for(int i = 0; i < size * 8; ++i){
        // print last bit and shift left.
        printf("%u", val & maxPow ? 1 : 0);
        val = val << 1;
    }

    printf("\n");
}
