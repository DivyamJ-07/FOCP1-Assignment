#include <stdio.h>
int main (){
int M[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},r,c;
for(c=0;c<5;c++){
for(r=0;r<3;r++)
{
   printf("%d",M[r][c]);
}
printf("\n");
}
}