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

int main ()
{
	char *s = malloc(sizeof(char) * 40);
	int i = 0;

	printf("enter the string :");
	scanf("%s", s);

	while (s[i])
	{
		printf("%c", s[i]);
		i++;
	}

	free(s);
	
}
