#include<stdio.h>
#include <stdlib.h>

int	wcounter(char *str, char sep)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if(str[i] != sep && (i == 0 || str[i] == sep))
			c++;
		i++;
	}

	return c;
}

char **split(char *str, char sep)
{
	int i = 0;
	int j;
	int k = 0;
	int wcount = wcounter(str, sep);
	char **arr = malloc(sizeof(char *) * (wcount + 1));

	while (str[i])
	{
		if (str[i] != sep && (i == 0 || str[i - 1] == sep))
		{
			j = 0;
			while (str[i + j] && str[i + j] != sep)
				j++;

			arr[k] = malloc(sizeof(char) * (j + 1));

			int l = 0;
			while (l < j)
			{
				arr[k][l] = str[i + l];
				l++;
			}
			arr[k][l] = '\0';
			k++;
		}
		i++;
	}
	arr[k] = NULL;
	return (arr);
}

int main()
{
	char **res = split("she got you blushing twin", ',');
	int i = 0;

	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	free (res);
}
