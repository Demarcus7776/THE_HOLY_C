#include<stdio.h>

int	binary(int nb)
{
	if(nb == 0)
		return 0;

	int ones = nb % 2;
	int zeros = binary(nb / 2);

	int r = (zeros * 10) + ones;

	return r;
}

int main ()
{
	printf("%d", binary(11));
}
