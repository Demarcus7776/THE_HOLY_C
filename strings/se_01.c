#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

int	check_palindrom(char *str)
{
	int 	len = ft_strlen(str) - 1; 
	int	i = 0;

	while (i < len)
	{
		if (str[i] != str[len])
			return 0;
		len--;
		i++;
	}
	return 1;
}

int main()
{
	char str[] = "radar";

	if (check_palindrom(str))
		printf("ts is palindrome");
	else
		printf("u tweaking mud");
}
