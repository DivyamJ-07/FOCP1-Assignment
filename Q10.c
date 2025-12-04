#include <stdio.h>
int main(){
    int array[10],count=0;
    for (int i = 0; i < 10; i++){
        printf("Enter a number : ");
        scanf("%d",&array[i]);
    }
    for (int j = 0; j < 10; j++){
       if (array[j]==99){
      count +=1;
     }
     }
    printf("Number of students who scored 99 are : %d\n",count);
    return 0;
}
