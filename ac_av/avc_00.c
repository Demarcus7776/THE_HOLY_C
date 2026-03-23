#include <stdio.h>

int main(int ac, char **av)
{
	int i = ac - 1;

	while(i > 0)
	{
		printf("%s\n", av[i]);
		i--;
	}
}
