#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return i;
}

void	ptr_rev(char *str)
{
	int len = ft_strlen(str) - 1;
	char *p = str;
	

	while(len >= 0)
	{
		printf("%c", *(str + len));
		len--;
	}
}

int main ()
{
	char s[] = "lebron";

	ptr_rev(s);
}
