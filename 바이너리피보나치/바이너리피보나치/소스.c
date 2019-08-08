#include <stdio.h>


int BinaryFibo(int *arr, int value) {
	
	int left, right, middle;
	left = 0; right = 12; middle = (left + right) / 2;
	if (value == arr[middle])
		return middle;
	else if (value > arr[middle])
		return BinaryFibo(arr, middle+1,right,value);
	else if (value < arr[middle])
		return BinaryFibo(arr, left, middle - 1, value);
	else
		return -1;
}


int main(void) {


	int arr[13] = { 2,4,7,10,11,45,50,59,60,66,69,70,79 };
	printf("%d \n", BinaryFibo(arr, 2));

	return 0;
}