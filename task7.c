#include <stdio.h>
#include <string.h>

void is_palindrom(char str[201])
{
	int mark = 0;
	int n = strlen(str);

	for (int i = 0; i = n / 2; ++i)
	{
		if (str[i] != str[n - i])
		{
			mark = 1;
			break;
		}
	}
	if (mark)
		printf("No");
	else
		printf("Yes");
}
int main()
{
	char str[201];
	scanf("%200s", str);
	is_palindrom(str);
}