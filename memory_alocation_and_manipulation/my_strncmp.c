#include<stdio.h>

int	my_strncmp(const char *s1, const char *s2, size_t n)
{
	while(n--)
	{
		if (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		else {
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
	}
	return 0;
}

void main() {
    char str1[] = "Hello";
    char str2[] = "Hella";
    int n = 5;

    printf("Testing my_strncmp:\n");
    printf("Comparing '%s' and '%s' for the first %d characters returns: %d\n", str1, str2, n, my_strncmp(str1, str2, n));
}