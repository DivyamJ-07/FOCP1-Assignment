#include <stdio.h>

int hcf(int a, int b) {
    int num = (a < b) ? a : b;
    int h = 0;
    for (int i = 1; i <= num; i++) {
        if (a % i == 0 && b % i == 0)
            h = i;
    }
    return h;
}

int main() {
    int number1, number2;
    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    int c = hcf(number1, number2);
    printf("The HCF of %d and %d is: %d\n", number1, number2, c);
    return 0;
}