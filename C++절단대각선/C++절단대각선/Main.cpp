#include <iostream>
#include <fstream>
#define MAX_SIZE 100

int main(void)
{
	std::ifstream fp;
	int testCases;
	fp.open("input.txt");
	fp >> testCases;
	while (testCases--)
	{
		int num;
		int arr[MAX_SIZE][MAX_SIZE];
		int tempSum = 0;
		fp >> num;
		for (int i = 0; i < num; i++)
		{
			for (int j = 0; j < num; j++)
				fp >> arr[i][j];
		}

		int temp1 = 0, sum1=0, temp2=0, sum2=0;
		
		for(int k = num-1; k >=0; k--)
		{
			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num; j++)
				{
					if (j - i == k || i - j == num - k)
						temp1 += arr[i][j];
				}
			}
			if (temp1 > sum1)
				sum1 = temp1;
			temp1 = 0;
		}

		for (int k = 0; k <= num -1; k++)
		{
			for (int i = 0; i < num; i++)
			{
				for (int j = 0; j < num; j++)
				{
					if (i + j == k || i + j == num + k)
						temp2 += arr[i][j];
				}
			}
			if (temp2 > sum2)
				sum2 = temp2;
			temp2 = 0;
		}

		int result = sum1>sum2 ? sum1 : sum2;
		std::cout << result << std::endl;
	}
	fp.close();
	return 0;
}