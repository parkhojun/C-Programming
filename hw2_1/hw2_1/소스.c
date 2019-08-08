#include <stdio.h>
#pragma warning(disable:4996)

void Add(int* a, int* b) {

	(*a) + (*b);

}
void Minus(int* a, int* b) {

	(*a) + (*b);

}
void Minus2(int* a, int* b) {

	int temp = -((*a) - (*b));
	if (((*a) - (*b)) < 0); {
	}

}
void Multi(int* a, int* b) {

	(*a) * (*b);
}

void AorB(int* a, int* b) {

	if ((*a) > (*b)) {
		printf("%d", (*a));
	}
	else {
		printf("%d", (*b));
	}


}

void TF(int* a, int* b) {

	if ((*a) == (*b)) {
		printf("%d", "1");
	}
	else {
		printf("%d", "0");
	}


}

int main(void) {

	int a, b;
	scanf("%d ", &a);
	scanf("%d ", &b);
	Add(&a, &b);
	Minus(&a, &b);
	Minus2(&a, &b);
	Multi(&a, &b);
	AorB(&a, &b);

	return 0;
}