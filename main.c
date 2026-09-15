
#include <stdio.h>


int count_digits(int n) {
    int counter = 1;
    while (n >= 10) {
        n /= 10;
        counter += 1;
    }
    return counter;
}


int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d has %d digits\n", x, count_digits(x));
    return 0;
}








