#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
	{
		i++;
	}
	return i;
}

void	ft_revers(char *str)
{
	int len = ft_strlen(str) - 1;
	
	while (len  >= 0 )
	{
		write(1, &str[len], 1);
		len--;
	}
}

int main ()
{
	char str[] = "ana nadi bzzaf ";

	ft_revers(str);
}
