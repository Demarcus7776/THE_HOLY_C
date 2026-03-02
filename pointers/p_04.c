#include<stdio.h>
#include<stdlib.h>

int	*create_array(int n)
{
	int *arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return NULL;

	int i = 0;

	while(i < n)
	{
		arr[i] = i;
		i++;
	}
	return arr;
}


int main()
{
    int *arr;
    int i;

    arr = create_array(8);

    for (i = 0; i < 8; i++)
        printf("%d ", arr[i]);

    free(arr);
}

