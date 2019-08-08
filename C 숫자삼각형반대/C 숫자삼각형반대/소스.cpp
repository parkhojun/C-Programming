#include <stdio.h>


int main(void)
{
	int i = 0, j = 0, k = 0, n = 1;

	for (i = 0; i<8; i++) {
		for (j = 0; j < 7 - i; j++)
		{
			printf("   ");
		}
		for (k = 7-i; k >6-i&&k<8; k++)
		{
			printf("%d ", n);
			n++;
		}
		printf("\n");
	}

	return 0;
}