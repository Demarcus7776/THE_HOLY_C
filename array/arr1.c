#include <stdio.h>
#include <stdlib.h>

void	sumarr(int *arr, int size)
{
	int i = 0;
	int sum = arr[0];

	while(i < size)
	{	
		sum += arr[i];
		i++;	
	}
	
	printf ("%d", sum);
}

int main ()
{
	int arr [] = {1,2,3,4,5};
	sumarr(arr,5);

}
