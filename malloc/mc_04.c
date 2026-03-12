#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int c;
	int r;
	int **arr;
	
	arr = malloc(sizeof(int *) * 3);

	r = 0;
	while(r < 3)
	{
		arr[r] = malloc(sizeof(int) * 3);
		
		c = 0;
		while (c < 3)
		{
			printf("enter the nums : ");
			scanf("%d", &arr[r][c]);
			c++;
		}
		r++;		
	}

	int i = 0;
	while (i < 3)
	{
		int j = 0;
		while(j < 3)
		{
			printf("%d", arr[i][j]);
			j++;	
		}
		printf("\n");
		i++;
	}
}
