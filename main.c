
#include <stdio.h>


int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}


int main(void) {
    int x;
    scanf("%d", &x);
    printf("factorial of %d is %d\n", x, factorial(x));
    return 0;
}








