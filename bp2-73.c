#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

int saturating_add(int x, int y){
    int sum = x + y;
    int w = sizeof(int) << 3;
    int check_x = x >> (w-1);
    int check_y = y >> (w-1);
    int check_sum = sum >> (w-1);
    int pos_mask =  (~check_x) & (~check_y) & check_sum;
    int neg_mask = check_x & check_y & (~check_sum);
    int sum_mask = pos | neg;
    int ans = (pos_mask & INT_MAX) | (neg_mask & INT_MIN) | (~sum_mask & sum);
    return ans;
}

int main(int argc, char *argv[]){
    printf("saturating_add: %d\n", saturating_add(atoi(argv[1]), atoi(argv[2])));
}
