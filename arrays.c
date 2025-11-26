#include <stdio.h>
int main (){
  char m[10],ch;
  printf("Enter the values: ");
  for(int i=0;i<10;i++)
  scanf(" %c",&m[i]);
  for(int i=0;i<10;i++)
  {ch= m[i];
  if( ch=='a' || ch== 'e' || ch=='i' || ch=='o'|| ch=='u')
  printf("\n%c",ch);}
return 0;
}  