#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Inner loop for stars
        for (int k = rows - i; k > 0; k--) {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
