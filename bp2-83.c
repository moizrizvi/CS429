#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int float_le(int x){
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);
    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;

    return
        (!sx && !sy && ux <= uy) ||
        (sx && !sy) ||
        (sx && sy && ux >= uy) ||
        (ux << 1 == 0 && uy << 1 == 0);
}


int main(int argc, char *argv[]){
    printf("float_le:\t%d\n", float_le(atoi(argv[1])));
}
