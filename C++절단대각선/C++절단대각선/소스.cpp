//#include <iostream>
//#include <fstream>
//#include <algorithm>
//
//void hw(std::ifstream&);
//using namespace std;
//
//int main(void) {
//
//	std::ifstream fin;
//
//
//	int num, i;
//
//	fin.open("input.txt");// ���� ����
//
//	fin >> num;
//
//	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
//	{
//		hw(fin);
//	}
//	fin.close();
//
//	return 0;
//}
//
//
//void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����
//
//	int num;
//	int i, j, y;
//	int arr[100][100] = { 0, };
//	int arr2[100] = { 0, };
//	int arr3[100] = { 0, };
//
//	fin >> num;
//
//	for (i = 0; i < num; i++)
//	{
//		for (j = 0; j < num; j++)
//			fin >> arr[i][j];
//	}
//	
//	for (i = 0; i < num; i++)
//	{
//		y = num - 1 - i;
//		for (j = 0; j < num; j++)
//		{
//			if (y > num - 1) { y %= num; }
//			arr2[i] += arr[i][y];
//			y++;
//		}
//	}
//	for (i = 0; i < num; i++)
//	{
//		y = num - 1 - i;
//		for (j = 0; j < num; j++)
//		{
//			if (y > num - 1) { y %= num; }
//			arr2[i] += arr[y][j];
//			y++;
//		}
//	}
//
//
//	sort(arr2, arr2 + num);
//	sort(arr3, arr3 + num);
//	if (arr2[0 > arr[3]]) { cout << arr2[0] << endl; }
//	else { cout << arr3[0] << endl; }
//}
