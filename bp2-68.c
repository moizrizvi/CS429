unsigned rotate_left(unsigned x, int n){
    int w = sizeof(int) << 3;
    unsigned right_side = x >> (w - n);
    unsigned left_side = x << n;
    return(left_side | right_side);
}
