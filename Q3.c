#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    b = ~b+2;
    a = a+b;
    printf("The difference is : %d\n",a);
    return 0;
}
