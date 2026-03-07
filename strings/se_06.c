#include <stdio.h>

int	count_words(char *str)
{
	int i = 0;
	int c = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			c++;
		i++;
	}
	return c;
}

int main ()
{
	char str[] = "fw u twin";

	printf("%d", count_words(str));
}
