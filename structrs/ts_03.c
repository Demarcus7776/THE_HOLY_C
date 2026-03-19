#include<stdio.h>

struct student
{
	char	name[50];
	int	birth;
};

void	printstruct(struct student a)
{
	printf("this is your name : %s\n", a.name);
	printf("this is your birth : %d\n", a.birth);
}

int main ()
{
	struct student s1 = {"jeff",2005};

	printstruct(s1);

}
