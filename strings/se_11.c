#include <stdio.h>

char	*cpystr(char *str , char *dst)
{
	int	i = 0;

	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}

int main ()
{
	char str[] = "i got u twin";
	char dst[20];

	printf("%s", cpystr(str,dst));
}
