#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int size;
	
	printf("enter the size of u r arr : ");
	scanf("%d", &size);

	int *arr = malloc(sizeof(int) * size);
	int i;
	for ( i = 0 ; i < size ; i++)
	{
		printf("enter the nums : ");
		scanf("%d", &arr[i]);
	}

	int j = 0;
	while (j < size)
	{
		printf("%d" , arr[j]);
		j++;
	}

	free(arr);
}
