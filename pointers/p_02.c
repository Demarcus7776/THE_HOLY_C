#include<stdio.h>

int	max_arr(int *arr, int size)
{
	int *p = arr;
	int *a = arr;

	while(p < arr + size)
	{
		if (p > a)
		       a = p;
		p++;	
	}
	return *a;
}

int main ()
{
	int arr[] = {1,2,3,4,5};

	printf("%d", max_arr(arr,5));
}
