#include <stdio.h>
#include <limits.h>

int int_shifts_are_arithmetic (){
    int w = sizeof(int) << 3;
    int n = INT_MIN;
    int p = INT_MAX;
    int n_shifted = n >> 1;
    int p_shifted = p >> 1;
    int n_check = (n_shifted & INT_MIN) >> (w-1);
    int p_check = (p_shifted & INT_MIN) >> (w-1);
    return(n_check | p_check);
}

int main(){
    printf("int_shifts_are_arithmetic: %d\n", int_shifts_are_arithmetic());
}
