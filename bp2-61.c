#include <stdio.h>
#include <limits.h>

int any_1s(int n){
    return(!(!n));
}

int main(int argc){
    printf("any_1s: %d\n", any_1s(argc));
}
