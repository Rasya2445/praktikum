#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "string_utils.h"

void reverse(char str[]) {
    int len = strlen(str);
    int i;
    char temp;

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int is_palindrome(char str[]) {
    int len = strlen(str);
    int i;

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            return 0;
        }
    }

    return 1;
}

void to_upper(char str[]) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}