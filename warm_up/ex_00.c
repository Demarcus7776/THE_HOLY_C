#include<stdio.h>
#include<unistd.h>

void	charentry(int i , int j , char m , char d, char f)

void	rush(int x, int y)
{
	int i = 1;

   // khasni ndir index jdid li ghadi yb9a y3amr l rows bo7dhom
		// bach mtkhrb9ch

	while(i <= c)
	{
		if(i == 1 || i == r)
		{	
			int j = 1;
			while(j <= r)
			{
				if(j == 1 || j == r)
					write(1, "o", 1);
				else
					write(1, "-", 1);
			j++;
			}
		}
		if (i == 2 || i == c)
			write(1, "|", 1);
	i++;
	}
}

int main ()
{
	rush(5,5);
}
