#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b){
    unsigned shift = i << 3;
    unsigned mask = 0xFF << shift;
    unsigned rep_char = b << shift;
    printf("%x\n",mask);
    printf("%x\n",rep_char);
    return (x & ~mask) | rep_char;
}

int main(int argc){
    printf("%x\n", replace_byte(0x12345678, argc, 0xAB));
}
