#ifndef _CONIO_H_
#define _CONIO_H_

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h> // For system()

// Function to get a character without echo
int getch(void) {
    struct termios oldattr, newattr;
    int ch;

    // Get current terminal settings
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;

    // Disable canonical mode and echo
    newattr.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);

    // Read a single character
    ch = getchar();

    // Restore original terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return ch;
}

// Function to get a character with echo
int getche(void) {
    int ch = getch(); // Get character without echo
    putchar(ch);      // Echo the character
    return ch;       // Return the character
}

// Function to safely get a string (alternative to gets)
char* gets(char* buffer, int size) {
    if (fgets(buffer, size, stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }
        return buffer;
    }
    return NULL; // Return NULL on failure
}

// Function to clear the console screen
void clrscr(void) {
    // Use system call to clear the screen
    system("clear"); // For Linux
    // For Windows, you can use: system("cls");
}

#endif // _CONIO_H_
