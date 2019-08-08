#include <stdio.h>

void CCC()
{
	printf("CCC\n");
}

void BBB()
{
	CCC();
	printf("BBB\n");
}

void AAA()
{
	BBB();
	printf("AAA\n");
}

void main()
{
	AAA();
	printf("DDD\n");
}