
#include <stdio.h>

int four_bit_adder (int a0, int a1, int a2, int a3,
                    int b0, int b1, int b2, int b3,
                    int cin ) {
  int x0 = a0 ^ b0;
  int i0 = x0 ^ cin;
  int c1 = (x0 & cin) | (a0 & b0);

  int x1 = a1 ^ b1;
  int i1 = x1 ^ c1;
  int c2 = (x1 & c1) | (a1 & b1);

  int x2 = a2 ^ b2;
  int i2 = x2 ^ c2;
  int c3 = (x2 & c2) | (a2 & b2);

  int x3 = a3 ^ b3;
  int i3 = x3 ^ c3;
  int i4 = (x3 & c3) | (a3 & b3);  

  int ans = ((i4 << 4) | (i3 << 3) | (i2 << 2) | (i1 << 1) | i0);
  
  return ans;
}

void adder_test() {
    int a, b, passed = 0, total = 0;
    for (a = 0; a < 16; a++)
        for (b = 0; b < 16; b++) {
            int a_a[4] = {a&1, ((a >> 1)&1), ((a >> 2)&1), ((a >> 3)&1)};
            int b_a[4] = {b&1, ((b >> 1)&1), ((b >> 2)&1), ((b >> 3)&1)};
            int cin;

            for (cin = 0; cin <= 1; cin++) {
                int result = four_bit_adder(a_a[0], a_a[1], a_a[2], a_a[3],
                                            b_a[0], b_a[1], b_a[2], b_a[3],
                                            cin);
                int sum = a + b + cin;
                if (result != sum)
                    printf("Failed with a=%d, b=%d, cin=%d. Result: %d. Should be: %d.\n",a,b,cin,result,sum);
                else
                    passed++;
                total++;
            }
        }
  printf("Passed %d of %d tests.\n",passed,total);
}

int main(void) {
  adder_test();
}
