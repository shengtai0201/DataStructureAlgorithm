#include "gcd.h"

int gcd_rec(int m, int n) {
    if (n == 0)
        return m;

    return gcd_rec(n, m % n);
}

int gcd_loop(int m, int n) {
    int r = 0;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}

