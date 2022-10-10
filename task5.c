#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[200];
    scanf("%200[^\n]", str);

	for (int i = 0; str[i]; ++i)
    {
        if (isspace(str[i]) && isalpha(str[i-1]))
            printf("!  "); 
        else
            printf("%c", str[i]);

        if (str[i + 1] == 0)
        {
            printf("!");
            break;
        }
    }
}