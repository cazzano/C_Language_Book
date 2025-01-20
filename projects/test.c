#include <stdio.h>
#include "conio.h"

int main() {
    char name[100];
    char ch;

    // Using gets() to get the user's name
    printf("Enter your name: ");
    gets(name, sizeof(name));
    printf("Hello, %s!\n", name);

    // Using getch() to wait for a key press without echo
    printf("Press any key to continue (using getch)...\n");
    getch(); // Wait for a key press

    // Using getche() to get a character and echo it
    printf("Press a key (using getche): ");
    ch = getche(); // Get character with echo
    printf("\nYou pressed: %c\n", ch);

    // Using gets() to get a string input
    char input[100];
    printf("Enter a string: ");
    gets(input, sizeof(input));
    printf("You entered: %s\n", input);

    return 0;
}
