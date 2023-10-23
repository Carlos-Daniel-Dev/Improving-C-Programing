#include <stdio.h>

int my_strlcat(char *dest, const char *src, int size)
{
	int dest_len = 0;
	int src_len = 0;

	// calcula o comprimento de dest e src

	while (dest[dest_len] && dest_len < size)
	{
		dest_len++;
	}

	while (src[src_len])
	{
		src_len++;
	}

	// caso nao haja espaço suficiente
	if (dest_len >= size)
	{
		return size + src_len;
	}

	int i = 0;
	while (src[i] && (dest_len + 1) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return dest_len + src_len;
}

/*
int main() {
    char dest[20] = "Hello";
    const char *src = ", world!";
    size_t size = 20;
    size_t result = my_strlcat(dest, src, size);
    printf("Concatenated string: %s\n", dest);
    printf("Length of the concatenated string: %zu\n", result);
    return 0;
}
*/