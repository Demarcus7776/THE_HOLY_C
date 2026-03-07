#include <stdio.h>

int	ft_count_char(char *str , char a)
{
	int i = 0;
	int  c = 0;

	while (str[i])
	{
		if (str[i] == a)
			c++;
		i++;
	}
	return c;
}

int main ()
{
	char str[] = "ananas";
	char a = 'a';

	printf("%d", ft_count_char(str,a));
}
