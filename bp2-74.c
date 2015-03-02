#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int tsub_ok(int x, int y){
    int w = sizeof(int) << 3;
    int diff = x - y;
    int x_sign = x >> (w-1);
    int y_sign = y >> (w-1);
    int diff_sign = diff >> (w-1);
    return (~(x_sign ^ y_sign) & 0x1) | ((y_sign ^ diff_sign) & 0x1);
}

int main(int argc, char *argv[]){
    printf("tsub_ok:\t%d\n", tsub_ok(atoi(argv[1]), atoi(argv[2])));
}
