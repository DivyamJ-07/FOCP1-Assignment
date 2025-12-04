#include <stdio.h>
int main()
{
    int student_scores[10];
    int found_flag = 0; // Just a simple variable for finding stuff
    
    // Get the input numbers
    for (int i = 0; i < 10; i++)
    {
        
        printf("Score for element %d: ", i);
        scanf("%d",&student_scores[i]);
    }

    
    // Now we search for the target value (99)
    for (int k = 0; k < 10; k++)
    {
        
        if (student_scores[k] == 99)
        {
            // Found it! Note: indices start at 0, so position is k+1
            printf("\nTarget value 99 found at position: %d\n", k + 1);
            found_flag = 1; // Set a flag just in case
            break; // Stop looking, we got it!
        }
        
    }
    
    // If we finished the loop without finding it
    if (found_flag == 0)
    {
        printf("\nSorry, 99 wasn't in the list.\n");
    }
    
    return 0;
}
