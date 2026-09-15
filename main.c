
#include <stdio.h>

int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int x;
    scanf("%d", &x);
    if (isEven(x)) {
        printf("%d is even \n", x);
    } else {
        printf("%d is odd \n", x);
    }
    return 0;
}
















