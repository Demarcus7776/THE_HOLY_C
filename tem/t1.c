#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int *p = malloc(sizeof(int) * 1);

	printf("enter your fav num");
	scanf("%d", p);

	printf("this is your fav num but in heap : %d", *p);

}
