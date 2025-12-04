#include <stdio.h>

int main()
{
 int input_numbers[10],peaks_list[10],highest_peak=0,peak_counter=0; 
 
    for (int i = 0; i < 10; i++)  {
        printf("Enter a number for spot %d: ", i);
        scanf("%d", &input_numbers[i]);
    }
    
    
    // Gotta start at index 1 and end before index 9 to check both sides!
    for (int j = 1; j < 9; j++)
    {

        // Is it bigger than the guy after it?
        if (input_numbers[j] > input_numbers[j + 1])
        {
            
            // And bigger than the guy before it? Sweet, it's a peak.
            if (input_numbers[j] > input_numbers[j - 1])
            {
             
                peaks_list[peak_counter] = input_numbers[j];
                peak_counter++;
            }
        }
    }
    
    
    printf("\n\n Peak Analysis Results\n");
    
    // Loop through the peaks we found to print them and find the biggest one
    
    for (int k=0; k<peak_counter; k++){
        
        printf("Found peak: %d\n", peaks_list[k]);
        
        if (peaks_list[k] > highest_peak)
            highest_peak = peaks_list[k];
    }
    
    
    printf("\nAbsolute highest peak value is: %d\n", highest_peak);

    return 0;
}
