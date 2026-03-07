#include<stdio.h>

void	max_arr(int *arr, int size)
{
	int i;
	int c = arr[0];

	while(i < size - 1)
	{
		if (c < arr[i])
			c = arr[i];
		i++;
	}
	printf("%d", c);
}

int main ()
{
	int arr[] = {1,2,3,4,5};

	max_arr(arr,6);
}
