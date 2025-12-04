#include <stdio.h>

int main()
{
    int arr[50], visited[50];
    int n, count, duplicate_found = 0; 
    printf("Enter size of array: ");
    scanf("%d", &n);
    // Basic validation check
    if (n <= 0 || n > 50)
    {
        printf("Invalid size! Enter between 1 and 50.\n");
        return 0;
    }
    
    // Taking inputs
    for (int i=0; i<n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
        visited[i] = 0; // Set visited to 0 (false) initially
    }
    printf("\nChecking for duplicates...\n");
    // Using two loops to compare everyone with everyone
    for(int i=0; i<n; i++)
    {
        // If we already checked this number, skip it
        if(visited[i] == 1) 
            continue;     
        count = 1; // It appears at least once (itself)
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1; // Mark as visited so we dont print it again
            }
        } 
        // If we found more than 1 copy
        if(count > 1)
        {
            printf("Duplicate found: %d (Repeated %d times)\n", arr[i], count);
            duplicate_found = 1;
        }
    }
    // If flag never changed, print -1
    if(duplicate_found == 0) {
        printf("-1\n");
    }
    return 0;
}
