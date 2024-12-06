#include <stdio.h>

void pr(int n) {
    if (n > 0) {
        pr(n - 1);
        printf("%d\n", n);
    }
}

int main() {
    pr(10);
    return 0;
}
