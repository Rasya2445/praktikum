#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main() {
    char text[100];
    char temp[100];

    printf("Masukkan string: ");
    fgets(text, sizeof(text), stdin);

    // Hapus newline dari fgets
    text[strcspn(text, "\n")] = '\0';

    // Reverse
    strcpy(temp, text);
    reverse(temp);
    printf("Reverse      : %s\n", temp);

    // Palindrome
    if(is_palindrome(text)) {
        printf("Palindrome   : Ya\n");
    } else {
        printf("Palindrome   : Tidak\n");
    }

    // Uppercase
    strcpy(temp, text);
    to_upper(temp);
    printf("Uppercase    : %s\n", temp);

    return 0;
}