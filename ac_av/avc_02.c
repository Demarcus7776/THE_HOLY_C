#include<stdio.h>

int main (int ac , char** av)
{
	int i;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == 'a')
				write(1, &av[1][i], 1);
			i++;
		}
	}
	
	write(1, "\n", 1);
}
