#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);

	if (a >= 65 && a <= 90)
		printf("Uppercase Letter\n");

	else if (a >= 97 && a <= 122)
		printf("Lowercase Letter\n");

	else if (a >= 48 && a <= 57)
		printf("Digit");

	else
		printf("Other\n");
	
}