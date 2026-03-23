#include <stdio.h>
#include <stdlib.h>

int	*twosum(int *arr, int size, int target)
{
	int i;
	int j;
	int *r = malloc(sizeof(int) * 2);

	i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if (arr[i] + arr[j] == target)
				{
					r[0] = arr[i];
					r[1] = arr[j];
				}
			j++;
		}
		i++;
	}

	return r;
}

int main ()
{
	int arr[] = {1,2,32,35,11,4};
	int *r = twosum(arr,6,67);
	int i;

	i = 0;
	while(i < 2)
	{
		printf("%d", r[i]);
		i++;
	}

	free(r);
}
