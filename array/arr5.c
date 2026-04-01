#include <stdio.h>

void ft_swap(int *arr, int size)
{
	int len = size - 1;
	int i;

	while(len >= 0)
	{
		printf("%d", arr[len]);
		len--;
	}
}

int main ()
{
	int arr[] = {1,2,3,4};

	ft_swap(arr,4);
}
