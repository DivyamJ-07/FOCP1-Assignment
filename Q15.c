#include <stdio.h>
int main()
{
    int my_list[5];
    
    // We're calculating the size in a kinda hacky way, but it works
    int current_size = sizeof(my_list) / sizeof(int); 
    
    for (int i = 0; i < current_size; i++)
    {
        printf("Gimme element #%d: ", i + 1);

        scanf("%d", &my_list[i]);
    }


    int last_val = my_list[current_size-1];
    
    
    // Shifting everything to the right by one position. 
    // Had to fix the loop boundary here so we don't crash the program!
    for (int j = current_size - 2 ; j >= 0; j--)
    {
        
        my_list[j+1] = my_list[j];
    }
    
    
    my_list[0] = last_val; // Put that saved value at the beginning
    

    printf("\nAfter rotation, the list is: \n");
    for (int k = 0; k < current_size; k++)
    {
        
        printf("{%d} ", my_list[k]);

    }
    printf("\n");
    return 0;
}
