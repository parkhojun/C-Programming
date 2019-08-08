#include <iostream>
#include <fstream>

using namespace std;

void hw(ifstream&);
using namespace std;

int main(void) {

	ifstream fin;
	int Case;

	fin.open("input.txt");// 파일 열기

	fin >> Case;

	while (Case--)
	{
		hw(fin);
		//cout << ' ' << endl;
	}
	fin.close();
	return 0;
}


void hw(ifstream& fin) {// 파일 실체, 주소값 불러오기

	int input, input2;
	int cnt = 0;
	int arr[25];
	int bin = 0, b_cnt = 0;
	int temp;

	for (int i = 0; i <25; i++)
	{
		fin >> input;
		arr[i] = input;
	}

	arr[12] = -1;

	int k = 75;
	while (k--)
	{
		fin >> input2;
		cnt++;
		for (int i = 0; i < 25; i++) {
			if (input2 == arr[i])
			{
				arr[i] = -1;
			}
		}
		if ((arr[0] == -1) && (arr[4] == -1) && (arr[20] == -1) && (arr[24] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[0] == -1) && (arr[1] == -1) && (arr[2] == -1) && (arr[3] == -1) && (arr[4] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[5] == -1) && (arr[6] == -1) && (arr[7] == -1) && (arr[8] == -1) && (arr[9] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[10] == -1) && (arr[11] == -1) && (arr[12] == -1) && (arr[13] == -1) && (arr[14] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[15] == -1) && (arr[16] == -1) && (arr[17] == -1) && (arr[18] == -1) && (arr[19] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[20] == -1) && (arr[21] == -1) && (arr[22] == -1) && (arr[23] == -1) && (arr[24] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[0] == -1) && (arr[5] == -1) && (arr[10] == -1) && (arr[15] == -1) && (arr[20] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[1] == -1) && (arr[6] == -1) && (arr[11] == -1) && (arr[16] == -1) && (arr[21] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[2] == -1) && (arr[7] == -1) && (arr[12] == -1) && (arr[17] == -1) && (arr[22] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[3] == -1) && (arr[8] == -1) && (arr[13] == -1) && (arr[18] == -1) && (arr[23] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[4] == -1) && (arr[9] == -1) && (arr[14] == -1) && (arr[19] == -1) && (arr[24] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[0] == -1) && (arr[6] == -1) && (arr[12] == -1) && (arr[18] == -1) && (arr[24] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		else if ((arr[4] == -1) && (arr[8] == -1) && (arr[12] == -1) && (arr[16] == -1) && (arr[20] == -1))
		{
			bin = 1;
			b_cnt++;
		}
		if (b_cnt == 1 && bin == 1)
		{
			temp = cnt;
		}
	}

	cout << temp << endl;

}