#include<stdio.h>

int	ft_counteven(int *arr, int size)
{
	int count = 0;
	int i = 0;

	while(i < size)
	{
		if (arr[i] % 2 == 0)
			count++;
		i++;
	}

	return count;
}

int main ()
{
	int arr[] = {2,3,4,6};
	
	printf("%d", ft_counteven(arr,4));
}
