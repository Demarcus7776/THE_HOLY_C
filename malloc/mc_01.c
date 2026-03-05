#include <stdio.h>
#include <stdlib.h>

int	ft_strln(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return i;
}

char	*fuh_dup(char *str)
{
	int len = ft_strln(str);
	int i = 0;

	char *dup = malloc(sizeof(int) * len);
	if(!dup)
		return NULL;

	while(str[i])
	{
		dup[i] = str[i];
		i++;
	}

	dup[i] = '\0';

	return dup;
}

int main ()
{
	char str[] = "pain on my dih";
	char *impo = fuh_dup(str);
	int i = 0;

	while(impo[i])
	{
		printf("%c", impo[i]);
		i++;
	}

	free(impo);
}
