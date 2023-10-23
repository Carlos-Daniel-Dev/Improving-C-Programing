#include <string.h>
#include <stdio.h>


int strlcpy(char *dest, const char *src, int size) {
    int src_len = strlen(src);  // Calcula o comprimento da string de origem
    if (size == 0) {
        return src_len;  // Se o tamanho for 0, retorna o comprimento da string de origem
    }
    int i = 0;
    // Copia tantos caracteres quanto possível, deixando espaço para o terminador nulo
    while (i < size - 1 && src[i] != '\0') {
        dest[i] = src[i];  // Copia o caractere atual da string de origem para a string de destino
        i++;
    }
    // Adiciona o terminador nulo ao final da string de destino
    dest[i] = '\0';
    return src_len;  // Retorna o comprimento total da string de origem
}

int main() {
    char dest[20];
    const char *src = "Hello, world!";
    int size = 20;
    int result = strlcpy(dest, src, size);  // Chama a função strlcpy para copiar a string
    printf("String copiada: %s\n", dest);  // Imprime a string copiada
    printf("Comprimento da string copiada: %zu\n", result);  // Imprime o comprimento da string copiada
    return 0;
}
