#include<stdio.h>
#include<stdlib.h>

void	odd_eve(int *arr , int size , int **eve , int **odd)
{
	
	*eve = malloc (sizeof(int) * size);
	*odd = malloc (sizeof(int) * size);

	int i = 0;
	int j = 0;
	int a = 0;

	while(i < size)
	{
		if(arr[i] % 2 == 0)
		{
			(*eve)[j] = arr[i];
			j++;
		}
		else if (arr[i] % 2 == 1)
		{
			(*odd)[a] = arr[i];
			a++;
		}	
		i++;
	}
}

int main ()
{
	int arr[] = {1,2,3,4,5,6};
	int *eve;
	int *odd;

	odd_eve(arr,6,&eve,&odd);

	int i = 0;
	while (i < 3)
	{
		printf("%d", eve[i]);
		i++;
	}

	printf("\n");

	i = 0;
	while (i  < 3)
	{
		printf("%d", odd[i]);
		i++;
	}
	
	free(eve);
	free(odd);
}
