#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return i;
}

char	*my_strdub(char *str)
{
	int len = ft_strlen(str) + 1;
	int i = 0;

	char *dub = malloc (sizeof(char) * len);
	if(!dub)
		return NULL;

	while (str[i])
	{
		dub[i]=str[i];
		i++;
	}
	dub[i] ='\0';

	return dub;
}

int main ()
{
	char *s = "lebron";
	char *copy = my_strdub(s);
	int i = 0;

	while(copy[i])
	{
		printf("%c", copy[i]);
		i++;
	}

	printf("%p\n", s);
	printf("%p\n", copy);

	free(copy);
}
