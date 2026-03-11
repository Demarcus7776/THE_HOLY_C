#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *s)
{
	int i = 0;

	while(s[i])
	{
		i++;
	}

	return i;
}

char	*ft_strdup(char *str)
{
	int len = ft_strlen(str);
	char *s = malloc (sizeof(char) * len);
	int i = 0;
	
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}

	return s;
}

int main ()
{
	char str[] = "lebron";
	char *dup = ft_strdup(str);
	int i = 0;

	while (dup[i])
	{
		printf("%c", dup[i]);
		i++;
	}

	free(dup);
}
