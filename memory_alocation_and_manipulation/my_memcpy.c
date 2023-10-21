#include <stdio.h>

void *my_memcpy(void *dest, const void *src, size_t n) {
    unsigned int i;

    if (dest == NULL || src == NULL)
        return NULL;

    i = 0;

    while (i < n) {
        ((int *)dest)[i] = ((int *)src)[i];
        i++;
    }
    return dest;
}

int main() {
    int source[5] = {4, 6, 7, 8, 9};
    int destination[5] = {0};

    my_memcpy(destination, source, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d", destination[i]);
    }
    printf("\n");

    return 0;
}
