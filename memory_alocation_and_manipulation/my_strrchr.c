#include <stdio.h>

char *my_strrchr(const char *str, int character) {
    if (str == NULL) {
        return NULL;
    }

    const char *last_occurrence = NULL;
    while (*str != '\0') {
        if (*str == character) {
            last_occurrence = str;
        }
        str++;
    }

    if (character == '\0') {
        return (char *)str;
    }

    return (char *)last_occurrence;
}

int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    char *last_occurrence = my_strrchr(str, ch);

    if (last_occurrence != NULL) {
        printf("Last occurrence of %c is at position: %ld\n", ch, last_occurrence - str);
    } else {
        printf("Character not found in the string.\n");
    }
    return 0;
}
