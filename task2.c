#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);

	if (a >= 65 && a <= 90)
		printf("%i\n", a - 64);

	else if (a >= 97 && a <= 122)
		printf("%i\n", a - 96);

	else
		printf("Not a letter\n");
}