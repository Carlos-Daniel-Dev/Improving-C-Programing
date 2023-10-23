#include <stdio.h>
#include "my_strlen.c"

void *my_memchr(const void *s, int c, int n)
{
	unsigned int i = 0;
	unsigned char *string;
	unsigned char needle;

	string = (unsigned char *) s;
	needle = (unsigned char) c;

	while (i < n)
	{
		if (string[i] == needle)
			return ((void *) string + i);
		i++;
	}

}

/*
int main()
{
	char *p;
	char data[] = "Learning Lad Rocks";
	char search = 'R';

	p = (char *)my_memchr(data, search, my_strlen(data));

	if (p != NULL)
		puts(p);
	else
		printf("Character is not present");

	return 0;
}
*/