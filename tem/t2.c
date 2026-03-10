#include<stdio.h>
#include<stdlib.h>

int	*marry(int *arr , int size)
{
	int *a = malloc(sizeof(int) * size);
	int i = 0;

	while(i < size)
	{
		a[i] = arr[i];
		i++;
	}
	
	return a;
}

int main ()
{
	int arr[]={1,2,3,4,5};
	int *r = marry(arr,5);
	int i = 0; 	

	while(i < 5)
	{
		printf("%d", r[i]);
		i++;
	}

	free(r);

}
