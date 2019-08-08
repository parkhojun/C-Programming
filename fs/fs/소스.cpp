#include <stdio.h>


int main()
{
	int i, j;

	i = 1;
	j = 5;
	while (i != 6)
	{
		
		while (j >= i)
		{
			printf("*");
			j--;
		}	
		i++;
	}



}