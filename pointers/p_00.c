#include<stdio.h>
#include<stdlib.h>

int	pointdat(int *ptr, int size)
{
	int arr[size];
	*ptr = arr[size];

	while(ptr);
	{
		if (arr == '\0')
			return (*ptr);
		*(ptr + 1);
	}
}

int main ()
{
	int arr[]={1,2,3,4,5};
	
	printf("%d", pointdat(arr,5));
}
