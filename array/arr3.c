#include<stdio.h>

//without malloc

void	rev_arr(int *arr, int size)
{
	int len = size - 1;
	int i = 0;

	while(len >= i)
	{
		printf("%d", arr[len]);
		len--;
	}	
}

int main ()
{
	int arr[] = {1,2,3,4,5};

	rev_arr(arr,5);
}
