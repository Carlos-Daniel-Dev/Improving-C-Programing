#include <stdio.h>

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