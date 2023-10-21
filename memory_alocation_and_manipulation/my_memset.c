#include <stdio.h>
#include "my_strlen.c"

void *my_memset(void *s, int c, int n)
{
	unsigned int i;
	char *cptr;

	i = 0;
	cptr = (char *) s;
	while(i < n)
	{
		cptr[i] = c;
		i++;
	}


	return ((void *) cptr);
}

/*

int main() {
    char str[50] = "Hello, world!";
    printf("Before memset: %s\n", str);
    int len = my_strlen(str);
    my_memset(str, '*', len);  // Substitui os últimos 5 caracteres por '*'
    printf("After memset: %s\n", str);
    return 0;
}

*/