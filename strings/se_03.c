#include <stdio.h>

int	check_dub(char *str)
{
	int i = 0;

	while (str[i])
	{
		int j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				return 1;
				break;
			}
			j++;
		}
		i++;
	}
	return 0;
}

int main ()
{
	char str[] = "twin";

	if (check_dub(str))
		printf("we found u nga");
	else
		printf("typ shi");
}
