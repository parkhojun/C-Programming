#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int MagicSquare(int arr[][7]) {

	int i, j, x, y, z;
	x = 0; y = 3; z = 1;
	for (i = 0; i<7; i++) {
		for (j = 0; j<7; j++) {
			if (x < 0)
				x = 6;
			if (y < 0)
				y = 6;
			if (arr[x][y] != 0)
			{
				x += 2; y++;
			}
			if (x>6) x = 0;
			if (y>6) y = 0;
			if (arr[x][y] != 0)
				x++;
			arr[x][y] = z;
			x--; y--;  z++;
		}	
	}
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 7; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main(void) {

	int arr[7][7];
	memset(arr, 0, sizeof(int) * 49);
	MagicSquare(arr);

	return 0;
}