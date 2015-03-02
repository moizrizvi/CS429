int fits_bits(int x, int n){
    int testShift = 8 * w;
    return ((x << testShift) >> testShift) == x;
}
