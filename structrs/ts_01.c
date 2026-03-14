#include<stdio.h>

char	ft_strcpy(char *s, char *d)
{
	int i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}

	return *d;
}

struct car
{
	char brand[50];
	int model;
	int price;
};


int main ()
{
	struct car s1;
	struct car s2;

	ft_strcpy("bmw", s1.brand);
	ft_strcpy("benz", s2.brand);

	s1.model = 2020;
	s2.model = 2022;

	s1.price = 2000;
	s2.price = 3000;

	printf("%s\n", s1.brand);
	printf("%d\n", s1.model);
	printf("%d\n", s1.price);

	printf("\n");

	printf("%s\n", s2.brand);
	printf("%d\n", s2.model);
	printf("%d\n", s2.price);
}
