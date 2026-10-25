#include<stdio.h>
int main()
    {
        char a = 5;
        printf("%d\n",~a);
        return 0;

    }

    /*
    a is assigned the value 5. In binary, that is typically 
    00000101 when shown in 8 bits.(Char takes 1 Byte in memory)
    The ~ operator flips every bit, so those bits become 11111010.
    -128 64 32 16 8 4 2 1
      1  1  1  1  1 0 1 0

      We know Char is signed, so the last bit is sign bit, for these reson 
      the last bit is negative which is -128.

      now the sum is -128+64+32+16+8+2 = -6

      so the output is -6

    */
