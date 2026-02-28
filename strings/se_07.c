#include <unistd.h>
#include <stdio.h>

void	ft_space_rmv(char *str)
{
	int i = 0;

	while (str[i])
	{
		if(str[i] != ' ')
			write(1, &str[i], 1);
		i++;
	}
}

int main ()
{
	char str[] = "h e l l o";

	ft_space_rmv(str);
}
