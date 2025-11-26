#include <stdio.h>
#include <math.h> //for power of functions

int main() {
    int num, original, remainder, digits = 0;
    double result = 0.0;

    //Input
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; //Copy of number

    //Count digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    //Sum of each digit raised to 'digits'
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;                 
        result += pow(remainder, digits);      
        temp /= 10;                            
    }

    //Result
    if ((int)result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
