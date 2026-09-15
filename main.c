
#include <stdio.h>

int max_of_3(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    } else if (c > max) {
        max = c;
    } else {
        max = a;
    }
    return max;
}


int main(void) {
    int x;
    int y;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int max = max_of_3(x, y, z);
    printf("maximum of %d, %d, %d is %d\n", x, y, z, max);
    return 0;
}
















