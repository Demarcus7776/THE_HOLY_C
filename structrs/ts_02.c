#include<stdio.h>

/*char	ft_cpy(char *s, char *d)
{
	int i;

	i=0;
	while(s[i])
	{
		d[i] = s[i];
		i++;
	}

	return *d;
}*/

struct	player
{
	char	name[50];
	int	lvl;
	float	health;	
};

int main ()
{
	struct player arr[3];
	int i;

	i = 0;
	while(i < 3)
	{
		printf("enter your name :");
		scanf("%s", arr[i].name);

		printf("enter yout lvl :");
		scanf("%d", &arr[i].lvl);
	
		printf("enter your health :");
		scanf("%f", &arr[i].health);
		
		printf("\n");
	
		i++;
	}

	printf("---- the players ------");

	printf("\n");

	i = 0;
	while(i < 3)
	{
		printf("this is u r name twin :%s\n", arr[i].name);
		
		printf("this is ur lvl nga : %d\n", arr[i].lvl);
		printf("this is ur health g : %f\n", arr[i].health);

		printf("\n");
		i++;
	}
}
