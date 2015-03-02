#include <stdio.h>
#include <limits.h>

int leftmost_one(unsigned x){
    x = x | (x >> 16);
    x = x | (x >> 8);
    x = x | (x >> 4);
    x = x | (x >> 2);
    x = x | (x >> 1);
    return(x ^ (x >> 1));
}

int main(int argc){
    printf("any_odd_one: %d\n", any_odd_one(argc);
}
