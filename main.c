
#include <stdio.h>


int main(void) {
    double x, y;
    char op;
    printf("enter fisrt num, opeartion and second num: ");
    scanf("%lf %c %lf", &x, &op, &y);

    switch (op) {
        case "+" :
            printf("%lf %c %lf = %.2f\n", x, op, y, x + y);
            break;
        case "-" :
            printf("%lf %c %lf = %.2f\n", x, op, y, x - y);
            break;
        case "*" :
            printf("%lf %c %lf = %.2f\n", x, op, y, x * y);
            break;
        case "/" :
            if (y != 0) {
                printf("%lf %c %lf = %.2f\n", x, op, y, x / y);
            } else {
                printf("ERROR: second num cant be zero\n");
            }
            break;
        default:
            printf("ERROR: unknown operation\n");
    }
    return 0;
}








