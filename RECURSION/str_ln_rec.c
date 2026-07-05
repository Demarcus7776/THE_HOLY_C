#include<stdio.h>

int	ft_strln(char *s)
{
	if( *s == '\0')
		return 0;
 	
	return 1 + ft_strln(s + 1);
}

int main ()
{
	char s[] = "lebron";

	printf("%d", ft_strln(s));
}
