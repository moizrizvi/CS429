#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int threefourths(int x){
    int n = x >> 2;
    return(n + n + n);
}


int main(int argc, char *argv[]){
    printf("threefourths:\t%d\n", threefourths(atoi(argv[1])));
}
