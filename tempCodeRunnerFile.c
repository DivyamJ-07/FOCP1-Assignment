#include <stdio.h>
#include<string.h>

int main(void){
char name[15];
printf("\n Enter the name :");
scanf("%s[^\n]",name);
printf("\n sizeof(name)=%d",sizeof(name));
gets(name);
}