#include <stdio.h>
#include <unistd.h>

char	*strstr(char *s1, char *s2)
{
	int i = 0;

	while(s1[i])
	{
		int j = 0;
		while(s1[i + j] == s2[j])
		{
			if (s2[j] == '\0')
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return NULL;
}

int main ()
{
	char str[] = "u got it lebron";
	char s[] = "leron";

	printf("%s", strstr(str,s));
}
