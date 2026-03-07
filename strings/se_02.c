#include <stdio.h>

int	ft_counter(char *s)
{
	int count = 0;
	int i;

	while (s[i])
	{
		count++;
		i++;
	}
	return count;
}

int main ()
{
	char s[] = "twin";

	printf("%d", ft_counter(s));
}
