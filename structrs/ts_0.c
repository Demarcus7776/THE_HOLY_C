#include<stdio.h>
#include<stdlib.h>

char	ft_strcpy(char *str , char *dst)
{
	int i;
	
	i  = 0;
	while(str[i])
	{
		dst[i] = str[i];
		i++;
	}
	
	return *dst;
}

struct gamer
{
	char	name[50];
	int	lvl;
	float	health;
};

int main ()
{
	struct gamer s1;

	ft_strcpy("lebron", s1.name);
	s1.lvl = 67;
	s1.health = 19.22;

	printf("%s\n", s1.name);
	printf("%d\n", s1.lvl);
	printf("%f\n", s1.health);

}
