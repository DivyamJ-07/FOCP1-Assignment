#include <stdio.h>

int main() {
    // Declared arrays and counters for separation
    int nums_in[10], evens[10], odds[10];
    int e_count = 0, o_count = 0;

    // Get 10 numbers from the keyboard
    for (int i = 0; i < 10; i++) {
        printf("Input number %d: ", i + 1);
        scanf("%d", &nums_in[i]);
    }

    // Loop through the input array and sort them out
    for (int j = 0; j < 10; j++) {
        if (nums_in[j] % 2 == 0) {
            evens[e_count] = nums_in[j];
            e_count++;
        } else {
            odds[o_count] = nums_in[j];
            o_count++;
        }
    }

    // Print the sorted even numbers
    printf("\nEven numbers list: ");
    for (int k = 0; k < e_count; k++) {
        printf("%d", evens[k]);
        if (k < e_count - 1) {
            printf("; "); // Using a semicolon separator now
        }
    }

    // Print the sorted odd numbers
    printf("\nOdd numbers list: ");
    for (int l = 0; l < o_count; l++) {
        printf("%d", odds[l]);
        if (l < o_count - 1) {
            printf("; "); // Using a semicolon separator now
        }
    }
    printf("\n");

    return 0;
}
