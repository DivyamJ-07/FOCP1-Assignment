#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice:");
    scanf("%d", &choice);

    if (choice == 1) {
        int bin, dec = 0, rem, i = 0;
        printf("Enter a binary number: ");
        scanf("%d", &bin);

        while (bin != 0) {
            rem = bin % 10;
            dec += rem * pow(2, i);
            bin /= 10;
            i++;
        }
        printf("Decimal value = %d\n", dec);
    }

    else if (choice == 2) {
        int dec, bin = 0, rem, i = 1;
        printf("Enter a decimal number: ");
        scanf("%d", &dec);

        while (dec != 0) {
            rem = dec % 2;
            bin += rem * i;
            dec /= 2;
            i *= 10;
        }
        printf("Binary value = %d\n", bin);
    }

    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
