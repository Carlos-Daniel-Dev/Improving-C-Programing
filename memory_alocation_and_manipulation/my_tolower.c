#include <stdio.h>

int my_tolower(int c)
{
	/*
	O char convetido para int de acordo com a
	tabela ASCII por exemplo A -> 65.

	Entao iremos saber se o valor decimal
	desse char esta entre os numeros de A a Z.

	Se sim, aumentamos esse numero com mais 32 para
	pegarmos a posiçao.

	Assim pegando a versao minuscula


	*/
	if (c >= 'A' && c <= 'Z')
		c +=32;

	return (c);
}

int main()
{	
	printf("%c\n", my_tolower(66));
	return 1;
}