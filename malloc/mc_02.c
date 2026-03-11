#include<stdio.h>
#include<stdlib.h>

int	*reverse_array(int *arr, int size)
{
	int rev = size - 1;
	int i;
	int *a = malloc (sizeof(int) * size);

	while(rev >= 0)
	{
			a[i] = arr[rev];
		i++;
		rev--;
	}

	return a;
}

int main ()
{
	int arr[] = {1,2,3,4,5};
	int *rev_arr = reverse_array(arr,5);
	int i = 0;

	while(i < 5)
	{
		printf("%d", rev_arr[i]);
		i++;
	}
	
	free(rev_arr);
}
