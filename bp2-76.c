#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int times_17(int x){
    return((x << 4) + x);
}

int times_neg_7(int x){
    return(x - (x << 3));
}

int times_60(int x){
    return((x << 6) - (x << 2));
}

int times_neg_112(int x){
    return((x << 4) - (x << 7));
}


int main(int argc, char *argv[]){
    printf("times_17:\t%d\n", times_17(atoi(argv[1])));
    printf("times_neg_7:\t%d\n", times_neg_7(atoi(argv[1])));
    printf("times_60:\t%d\n", times_60(atoi(argv[1])));
    printf("times_neg_112:\t%d\n", times_neg_112(atoi(argv[1])));
}
