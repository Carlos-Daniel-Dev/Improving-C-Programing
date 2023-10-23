#include <stdio.h>

int my_memcmp(const void *s1, const void *s2, int n) {
    const unsigned char *this_ptr = s1;
    const unsigned char *that_ptr = s2;
    int i = 0;

    /*
		percorrer toda a string
		ate encontrar os caracteres
		que sao diferentes de uma
		string pra outra e retornar
		a diferença de um caractere
		pro outro na tabela ascii
    */
    while (i < n) {
        if (*this_ptr != *that_ptr) {
            return (*this_ptr - *that_ptr);
        }

        this_ptr++;
        that_ptr++;
        i++;
    }
    return 0;
}

/*
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = my_memcmp(str1, str2, 5);
    printf("Comparison result: %d\n", result);

    char str3[] = "Hello";
    char str4[] = "World";
    int result2 = my_memcmp(str3, str4, 5);
    printf("Comparison result: %d\n", result2);
    
    return 0;
}
*/