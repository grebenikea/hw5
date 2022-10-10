#include <stdio.h>
#include <string.h>

int main()
{
	char s[200];
	scanf("%s", &s);

	int n = strlen(s);

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("%c", s[j]);
		}
		printf("\n");
	}

}