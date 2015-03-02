#include <stdio.h>
#include <limits.h>

int any_odd_one(unsigned x){
    return(!!(0xAAAAAAAA & x));
}

int main(int argc){
    printf("any_odd_one: %d\n", any_odd_one(argc);
}
