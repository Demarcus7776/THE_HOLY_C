#include <stdio.h>

int main ()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int max = arr[0];
	float avv;
	int min;
	int sum;

	int i = 0;
	while (i < 10)
	{
		sum += arr[i];
		max += arr[i];
		min -= arr[i];

		if (min > arr[i])
		{
			min = arr[i];
		}
		else if (max < arr[i])
		{
			max = arr[i];
		}
		i++;
	}
	avv = sum / 5;

	printf("%d\n", max);
	printf("%d\n", min);
	printf("%d\n", sum);
	printf("%f", avv);


}
