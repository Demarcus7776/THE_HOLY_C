#include <stdio.h>

void	swampizzo(int *p, int *a)
{
	int tmp;

	tmp = *a;
	*a = *p;
	*p = tmp;
	
	printf("%d %d", *a,*p);
}

int main()
{
	int a =7;
	int b = 6;

	swampizzo(&a,&b);
}
