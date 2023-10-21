#include <stdio.h>

/**
 * @brief Counts how many bytes there are in 's' before a '\0' can be found.
 * 
 * @param s a truc C string, that is, terminated by '\0'.
 * @return size_t the amount of chars contained in 's'.
 */

int my_strlen(const char* s)
{

	// Inicializar a variavel das contas
	int quantity_of_chars = 0;

	while(*s)// enquanto o elemento nao for \0 continue
	{
		quantity_of_chars++;
		s++;
	}

	return (quantity_of_chars);

}

void main()
{
	const char string[100] = "hello world";
	const char *ptr = &string[0];

	int size = my_strlen(ptr);

	printf("%d\n", size);
}