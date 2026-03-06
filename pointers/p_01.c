#include <stdio.h>

void	swampizzo(int *p, int *a)
{
	int tmp;

	tmp = *a;
	*a = *p;
	*p = tmp;	
}

int main()
{
	int a =7;
	int b = 6;

	swampizzo(&a,&b);

	printf("%d %d", a , b);
}
