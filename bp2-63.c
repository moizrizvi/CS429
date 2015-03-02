#include <stdio.h>
#include <limits.h>

unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;
    return(xsra & (MAX_INT >> (k-1)));
}

int sra(int x, int k) {
    /* Perform shift logically */
    int xsrl = (unsigned) x >> k;
    return(xsrl | ~(MAX_INT >> (k-1)));
}

int main(int argc){
    printf("srl: %d\n", srl(-1,5)
    printf("sra: %d\n", sra(-1,5)));
}
