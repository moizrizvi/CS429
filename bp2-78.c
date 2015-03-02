#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int mul3div4(int x){
    return((x + x + x) >> 2);

}

int main(int argc, char *argv[]){
    printf("mul3div4:\t%d\n", mul3div4(atoi(argv[1])));
}
