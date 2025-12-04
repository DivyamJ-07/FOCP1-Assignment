#include <stdio.h>
int main(){
    int arr[100], n, i, pos = -1, choice;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // getting inputs
    for(i=0; i<n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]); 
    printf("\n");

    printf("\n1. Delete Front\n2. Delete Middle\n3. Delete End\nChoice: ");
    scanf("%d", &choice);

    // figuring out which index to kill
    if(choice == 1) pos = 0;
    else if(choice == 2) {
        printf("Enter index to delete (0 to %d): ", n-1);
        scanf("%d", &pos);
    }
    else if(choice == 3) pos = n - 1;
    else { printf("Invalid choice"); return 0; }

    // validation
    if(pos<0 || pos>=n) { printf("Bad index"); return 0;}

    // THE DELETION LOGIC (shifts everything left)
    for(i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--; // reduce size

    printf("\nArray after deletion: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
