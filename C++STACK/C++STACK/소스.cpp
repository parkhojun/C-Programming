#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <memory>

using namespace std;

int main(void)
{
	char* n = (char*)malloc(sizeof(char) * 1000);
	int N;
	int size = 0;
	int push_num;
	int top = -1;
	int *stack;

	cin >> N;

	stack = (int*)malloc(sizeof(int)*N);
	memset(stack, 0, N*sizeof(int));

	for (int i = 0; i < N; i++)
	{
		cin >> n;
		if (strcmp(n, "push") == 0)
		{
			cin >> push_num;
			stack[size] = push_num;
			size++; top++;
		}
		else if (strcmp(n, "pop") == 0)
		{
			if (top == -1) { cout << -1 << endl; }
			else
			{
				cout << stack[top] << endl;
				stack[top] = 0; size--; top--;
			}
		}
		else if (strcmp(n, "top") == 0)
		{
			if (size == 0) { cout << -1 << endl; }
			else { cout << stack[top] << endl; }
		}
		else if (strcmp(n, "empty") == 0)
		{
			if (size == 0) { cout << 1 << endl; }
			else { cout << 0 << endl; }
		}
		if (strcmp(n, "size") == 0)
		{
			cout << size << endl;
		}

	}

	free(stack);
	return 0;
}