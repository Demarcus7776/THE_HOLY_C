#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int *arr = malloc(sizeof(int) * 10);
	int even = arr[0];
	int odd = arr[0];

	for (int i = 0; i < 10 ; i ++)
	{
		printf("enter your num :");
		scanf("%d", &arr[i]);
	}
	for (int i = 9; i >= 0 ; i--)
	{
		if(arr[i] % 2 == 0)
		{
			even++;
		}
		else if (arr[i] % 2 == 1)
		{
			odd++;
		}
	}

	printf("%d\n", even);
	printf("%d\n", odd);

}
