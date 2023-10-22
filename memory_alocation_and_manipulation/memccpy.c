#include <stdio.h>

/**
 * @brief Copies no more than 'n' bytes from memory area 'src' to memory area
 * 'dest', stopping when the character 'c' is found.
 * 
 * @param dest destination memory area that will receive the copied characters.
 * @param src source memory area from which characters will be copied.
 * @param c delimiter char to stop the copy process if encountered.
 * @param n max number of chars that must be copied.
 * @return void* a pointer to the next character in 'dest' after 'c', or NULL
 * if 'c' was not found in the first 'n' characters of 'src'.
 */

void *my_memccpy(void *dest, const void *src, int c, int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        // copiar do src pro destino convertendo para unsigned char
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        // se o char for o char de parada
        if (((unsigned char *)src)[i] == (unsigned char)c) {
            ((unsigned char *)dest)[i + 1] = '\0'; // Adicionando o caractere nulo para proxima posiçao
            return (void *)((char *)dest + i + 1);
        }
    }

    ((unsigned char *)dest)[n] = '\0'; // Adicionando o caractere nulo caso o caractere 'c' não seja encontrado em 'n' caracteres
    return NULL;
}

/*
int main()
{
    char src[] = "Hello, this is a test string.";
    char dest[50];
    char c = 'i';
    int n = 30;

    printf("Source string: %s\n", src);

    void *result = my_memccpy(dest, src, c, n);

    if (result != NULL)
    {
        printf("Destination string after character '%c': %s\n", c, (char *)dest);
    }
    else
    {
        printf("Character '%c' not found in the first %d characters of the source string.\n", c, n);
    }

    return 0;
}
*/