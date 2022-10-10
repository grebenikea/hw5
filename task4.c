#include <stdio.h>
#include <string.h>

int main()
{
	char first[1200], second[200];
	scanf("%s%s", &first, &second);

	int n = strlen(first);
	int m = strlen(second);

	int k = 0;
	int t = 0;
	if (n <= m)
	{
		k = n;
		t = m;
		for (int i = 0; i <= k; ++i)
		{
			printf("%c", first[i]);
			printf("%c", second[i]);
		}
		for (int i = k; i <= t; ++i)
			printf("%c", second[i]);

	}
	else
	{
		k = m;
		t = n;
		for (int i = 0; i < k; ++i)
		{
			printf("%c", first[i]);
			printf("%c", second[i]);
		}
		for (int i = k; i <= t; ++i)
			printf("%c", first[i]);
	}
}
// почему-то выводит через пробел и добавляет еще одну букву с индексом k+1