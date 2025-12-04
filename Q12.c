#include <stdio.h>

int main() 
{   // Array to hold the ten numbers from the user
    int data_set[10];
    // Looping 10 times to grab the input
    for (int idx = 0; idx < 10; idx++) {
        printf("Give me number %d: ", idx + 1);
        scanf("%d", &data_set[idx]);
    }
    // Assume the first number is both the biggest and smallest to start
    int biggest = data_set[0];
    int smallest = data_set[0];
    // Go through the whole list to check for new max and min
    for (int j = 0; j < 10; j++) {    
        // Is the current element larger than the current biggest?
        if (data_set[j] > biggest) {
            biggest = data_set[j];
        } 
        // Is the current element smaller than the current smallest?
        else if (data_set[j] < smallest) {
            smallest = data_set[j];
        }
    }
    // Print out the results
    printf("\n--- Result ---\n");
    printf("Largest number found: %d\n", biggest);
    printf("Smallest number found: %d\n", smallest); 
    return 0;
}
