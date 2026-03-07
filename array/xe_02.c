#include <stdio.h>
#include <stdlib.h>

int *ft_dub(int *arr, int len, int maxlen)
{
	int *arr = malloc(maxlen * sizeof(int));
}

int main ()
{
	int *arr = malloc(sizeof(int) * 5);
	
	for (int i = 0 ; i <= 5 ; i++)
	{
		printf ("enter your num :");
	       scanf("%d", &arr[i]);	
	}

	int i = 0;
	int tmp;
	int count = arr[0];
	while ( i <= 5)
	{
		int j = i + 1;
		while (arr[i] > arr[j])
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			j++;

		}
		
		if (i == 0 || arr[i] != arr[i - 1])
			printf("%d\n", arr[i]);
		i++;
	}
}
