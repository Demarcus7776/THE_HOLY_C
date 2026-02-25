#include <unistd.h>
#include <stdio.h>

char	*ft_cap(char *str)
{
	int i = 0;

	while (str[i])
	{
		if(i == 0 || str[i] <= 'a' && str[i] <= 'z' )
			str[i] -= 32;
		else if (str[i] <= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int main ()
{
	char str[] = "life is a roblox";

	printf("%s", ft_cap(str));
}
