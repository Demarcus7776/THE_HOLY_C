#include<stdio.h>
#include<stdlib.h>

void	increment(int *arr, int size)
{
	int *p = arr;

	while (p < arr + size)
	{
		printf("%d\n", *p);
		p++;
	}

}

int main ()
{
	int arr[]={1,2,3,4,5};
	
	 increment(arr,5);
}
