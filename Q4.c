#include <stdio.h>
void swapping_by_method_1(int a, int b);
void swapping_by_method_2(int a, int b);
int swapping_by_method_3(int *a, int *b);
void swapping_by_method_4(int* a,int* b);
int main()
{
    int number1, number2, command;
    printf("Enter a number : ");
    scanf("%d", &number1);
    printf("Enter a second number : ");
    scanf("%d", &number2);
    printf("Enter a method number  : ");
    scanf("%d", &command);
    if (command == 1)
        swapping_by_method_1(number1, number2);
    else if (command == 2)
        swapping_by_method_2(number1, number2);
    else if (command == 3)
    {
        swapping_by_method_3(&number1, &number2);
        printf("Number 1 is : %d\nNumber 2 is : %d\n", number1, number2);
    }
    else if (command == 4)
    {
        swapping_by_method_4(&number1, &number2);
        printf("Number 1 is : %d\nNumber 2 is : %d\n", number1, number2);
    }
    else{
        printf("Invalid command swapping.");
    }
    return 0;
}
void swapping_by_method_1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Number 1 is : %d", a);
    printf("Number 2 is : %d", b);
}
void swapping_by_method_2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Number 1 is : %d", a);
    printf("Number 2 is : %d", b);
}
int swapping_by_method_3(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapping_by_method_4(int* a,int* b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;}