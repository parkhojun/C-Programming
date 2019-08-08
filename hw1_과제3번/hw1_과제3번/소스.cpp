#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	int *arr;
	int n_arr = 0;
	int a,i,j = 0;

	printf("숫자를 입력해 주세요 : ");
	scanf("%d", &x);

	arr = (int*)malloc(sizeof(int)*x); 

	for (i = 0; i < x; i++)
	{
		scanf("%d", &n_arr);
		arr[i] = n_arr;
	}

	i = 0;
	for (i = 0; i < x - 1; i++)
	{
		for (j = 0; j < x - 1 - i; j++)
		{
			
			if (arr[j] < arr[j + 1])
			{

				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}


	i = 0;
	for (i = 0; i < x; i++)
	{
		printf("%d ", arr[i]);
	}

	free(arr);
}