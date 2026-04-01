#include <stdio.h>

int	if_sorted(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(i < j)
				return 1;
			j++;
		}
		i++;
	}

	return 0;
}

int main ()
{
	int arr[] = {1,2,3,4,5};

	if(if_sorted)
	{
		printf("this shit is sorted");
	}
	else
	{
		printf("FAAHHHHH");
	}
}
