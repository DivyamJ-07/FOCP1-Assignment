#include <stdio.h>
int main (void)
{
  int marks,greater;
  printf("Enter marks of the first student: ");
  scanf("%d",&marks);
  greater=marks;
  for (int i=2;i<=5;i++){
  printf("Enter your marks: ");
  scanf("%d",&marks);
   if(greater<marks)
    {greater=marks;}}
  printf("Greatest is %i",greater);
}