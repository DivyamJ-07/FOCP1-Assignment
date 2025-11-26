#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nOriginal values: a=%d, b=%d\n", a, b);
    
    // Method 1: Using third variable
    temp = a;
    a = b;
    b = temp;
    printf("After swap (temp): a=%d, b=%d\n", a, b);

    // Method 2: Without third variable (arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (arithmetic): a=%d, b=%d\n", a, b);

    // Method 3: Using bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap (XOR): a=%d, b=%d\n", a, b);

    // Method 4: Using pointers
    int *d = &a, *e = &b, t;
    t = *d;
    *d = *e;
    *e = t;
    printf("After swap (pointers): a=%d, b=%d\n", a, b);

    return 0;
}
