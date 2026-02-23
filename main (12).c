#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);   
    if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("It is an Alphabet character.\n");
    }
    else {
        printf("It is a Special character.\n");
    }

    return 0;
}