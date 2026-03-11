#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int dif = max - min;
	int *arr = malloc (sizeof(int) * dif);
	int i;

	if (!arr)
	  return NULL;

	if (min > max)
	  return NULL;

	i = 0;
	while (i < dif)
	{
		arr[i] = min + i;
		i++;
	}

	return arr;
}

int main ()
{
	int *arr =ft_range(6,8);
	int i;

	i = 0;
	while (i < 2)
	{
		printf("%d", arr[i]);
		i++;
	}

	free(arr);
}
