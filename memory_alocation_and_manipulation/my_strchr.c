#include <stdio.h>

char *my_strchr(const char *str, int c) {
    while (*str != '\0') {
        if (*str == c) {
            return (char *)str;
        }
        str++;
    }
    if (c == '\0') {
        return (char *)str;
    }
    return NULL;
}

int main() {
    const char *str = "Hello, world!";
    char c = 'o';
    char *result = my_strchr(str, c);
    if (result != NULL) {
        printf("O caractere '%c' foi encontrado em: %s\n", c, result);
    } else {
        printf("O caractere '%c' não foi encontrado.\n", c);
    }
    return 0;
}
