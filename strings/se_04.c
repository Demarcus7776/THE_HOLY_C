#include <stdio.h>
#include <unistd.h>

int	ft_strln(char *str)
{
	int i;

	while (str[i])
	{
		i++;
	}
	return i;
}

int	count_digits(char *str)
{
	int c = 0;
	int i = 0;

	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			c++;
		i++;
	}
	return c;
}

int	count_alpha(char *str)
{
	int c = 0;
	int i = 0;

	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			c++;
		i++;
	}
	return c;
}

int	count_spces(char *str)
{
	int c = 0;
	int i = 0;

	while (str[i])
	{
		if(str[i] == ' ')
			c++;
		i++;
	}
	return c;
}

void	rev_string(char *str)
{
	int len = ft_strln(str) - 1;

	while (len >= 0)
	{
		
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
}

int	check_palindrome(char *str)
{
	int i = 0;
	int len = ft_strln(str) - 1;

	while (i < len)
	{
		if(str[i] != str[len])
			return 0;
		i++;
		len--;
	}
	return 1;
}

int main ()
{
	char str[] = "she got u blushing twin 67";

	printf("this is the lenght :%d\n", ft_strln(str));
	printf("this is all nums : %d\n", count_digits(str));
	printf("this is all alpha's : %d\n", count_alpha(str));
	printf("this is all space's : %d\n", count_spces(str));

	if(check_palindrome(str))
		printf("yessirski");
	else
		printf("u twinking mud");

	rev_string(str);	
}
