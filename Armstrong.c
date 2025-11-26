#include <stdio.h>
#include <math.h>

int main (void){
int num,orignal_num,remain,final=0,n=0;
//Take number
printf("Enter the number: ");
scanf("%d",&num);
printf("Entered value %d",num);
orignal_num=num;
//Evaluate  
while(orignal_num!=0)
{
    n++;
orignal_num/=10;}
orignal_num=num;
while(orignal_num !=0)
{
remain = orignal_num%10;
final+= ceil(pow(remain,n));
orignal_num/=10 ;
}

printf("\n Final =%d Num=%d",final,num);}