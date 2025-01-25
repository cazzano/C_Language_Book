#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces (decreasing from left)
        for (int j = rows; j > i; j--) {
            printf(" ");
        }

        // Inner loop for stars (increasing)
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
