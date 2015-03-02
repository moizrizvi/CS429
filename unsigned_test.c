#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 


int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int m = (unsigned) n;
    printf("signed:\t%d\n", n);
    printf("unsigned:\t%u\n", m);
}