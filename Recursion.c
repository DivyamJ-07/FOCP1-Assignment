#include <stdio.h>
int factorial(int n);

int main(void){
    int result = factorial(5);
    printf("here is the result = %d", result);
    return 0;
}
int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}