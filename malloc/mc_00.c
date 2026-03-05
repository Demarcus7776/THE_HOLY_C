#include <stdio.h>
#include <stdlib.h>

int	*range(int sta, int end)
{
	int *p;
	int i = 0;

	p = malloc(sizeof(int) * (end - sta));

	while (i < end - sta)
	{
		p[i] = sta + i;
		i++;
	}
	
	return p;
}

int main()
{
	int *arr;
	int i = 0;

	arr = range(3, 8);

	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}

	free(arr);
}
