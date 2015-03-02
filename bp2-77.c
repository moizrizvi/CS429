#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int divide_power2(int x, int k){
    return(x >> k);
}

int main(int argc, char *argv[]){
    printf("divide_power2:\t%d\n", divide_power2(atoi(argv[1]), atoi(argv[2])));
}
