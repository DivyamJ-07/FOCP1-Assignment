#include <stdio.h>
int main(){
    int number,n1[32],numebr_of_spaces=8;
    printf("Enter how much lines you want in the pyramid : ");
    scanf("%d",&number);
    for (int i = 0; i <= number; i++)
    {

        if(n1[i-1]==0){
            n1[i]=1;
        }
        else{
            n1[i]=0;
        }
        for (int s = 0; s <= i; s++)
        {
            printf("%d",n1[s]);
        }
        for (int i = 0; i < numebr_of_spaces; i++)
        {
            printf(" ");
        }
        

        for (int k = i; k >=0; k--)
        {
            printf("%d",n1[k]);
        }
        numebr_of_spaces-=2;
        printf("\n");
        
    }
    
    return 0;
}