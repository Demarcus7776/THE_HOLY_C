#include<stdio.h>

char    rmv_dub(char *s)
{
        int i;
        int c = s[0];

	i = 0;
        while(s[i])
        {
                if(s[i] == c)
                        i++;
                if(s[i] == '\0')
                {
                        c++;
                        i = 0;
                }
		if(c == '\0' )
			break;
        i++;
        }

        return (s);
}

int main ()
{
	char s[] = "cette phrase ne cache rien";

	printf("%s", rmv_dub(s));
}
