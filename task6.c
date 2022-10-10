#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char str[200];
    scanf("%s", str);
    int mark = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ')' && (i = 1))
			break;
		
		if (str[i] == '(' && (i > 1))
			mark += 1;

		if (str[i] == ')' && (i > 1))
			mark -= 1;
	}

	if (mark == 0)
		printf("Yes");
	else
		printf("No");
}