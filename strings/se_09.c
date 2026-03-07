#include <stdio.h>
#include <unistd.h>

int	ft_cmpstr(char *str, char *dst)
{
	int	i = 0;

	while (str[i] && dst[i] &&str[i] == dst[i])
	{
		i++;
	}
	return (str[i] - dst[i]) ;
}

int main ()
{

	printf("%d\n", ft_strcmp("abc", "abc")); // 0
    printf("%d\n", ft_strcmp("abc", "abd")); // negative
    printf("%d\n", ft_strcmp("abe", "abd")); // positive
}
}
