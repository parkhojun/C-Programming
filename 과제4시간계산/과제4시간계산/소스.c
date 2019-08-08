/*************************************************************************
*                                                         *
* Problem :                                                  *
* 시간계산  *
*                                                        *
*************************************************************************/
/*************************************************************************
*                                                       *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                   *
* 20153183 박호준                                           *
*                                                       *
*************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in_file;
	int i, j;
	int no_cases, no_data;
	int H, M, S, d, h, m, s;
	int x, y, z;
	

	in_file = fopen("input.txt", "r");
	if (in_file == NULL) exit(1);

	fscanf(in_file, "%d", &no_cases);

	for (i = 0; i < no_cases; i++)
	{
		fscanf(in_file, "%d", &no_data);
		x = 0; y = 0; z = 0; d = 0;

			for (j = 0; j < no_data; j++)
			{
				fscanf(in_file, "%d %d %d %d %d %d", &H, &M, &S, &h, &m, &s); 
				x += h - H; y += m - M; z += s - S;
				if (y < 0) {
					y = 60 + y;
					x--;
				}
				if (z < 0) {
					z = 60 +z;
					y--;
				}
				if (z >= 60) {
					y++;
					z -= 60;
				}
				if (y >= 60) {
					x++;
					y -= 60;
				}
				if (x >= 24) {
					d++;
					x -= 24;
				}
			}

		printf("%d %d %d %d\n", d, x, y, z); 
	}
	fclose(in_file);
	return 0;
}