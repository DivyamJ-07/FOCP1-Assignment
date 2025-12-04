#include <stdio.h>

int main() {
    // Array to hold the input numbers, and a simple check variable
    int input_list[10], is_prime = 1;
    
    // Grab those 10 numbers!
    for (int i = 0; i < 10; i++) {
        printf("Feed me a number: ");
        scanf("%d", &input_list[i]);
    }
    
    printf("\n Prime Check Results \n");
    
    // Loop through the input list one by one
    for (int k = 0; k < 10; k++) {
        
        is_prime = 1; // Reset this for every new number
        
        // Don't bother checking 1 or 0, they aren't prime.
        if (input_list[k] <= 1) {
            is_prime = 0;
        } 
        
        // Loop from 2 up to the number itself (or better, up to the square root, but this is simpler)
        for (int factor = 2; factor < input_list[k]; factor++) {
            
            // If we find ANY number that divides it perfectly...
            if (input_list[k] % factor == 0) {
                is_prime = 0; // It's NOT prime
                break;       // Stop checking immediately, no point continuing the loop
            }
        }
        // If the flag is still 1, we found a prime!
        if (is_prime == 1) {
            printf("%d is a legit PRIME number!\n", input_list[k]);
        }
    }
  
    return 0; // Good C practice to return something
}
