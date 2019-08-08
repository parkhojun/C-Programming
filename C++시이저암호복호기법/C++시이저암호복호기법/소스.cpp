#include<iostream>
#include<fstream>

using namespace std;
void hw(std::ifstream&);
int Length(char *data);


float Alpha_Fre_Num[26] = { 8.167, 1.492, 2.782, 4.253, 12.702, 2.228, 2.015, 6.094, 6.996, 0.153, 0.772, 4.025, 2.406, 6.749, 7.507,
1.929, 0.095, 5.987, 6.327, 9.056, 2.758, 0.978, 2.360, 0.150, 1.974, 0.074 };


int main(void) {

	std::ifstream fin;

	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		hw(fin);
		//std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


int Length(char *A) {
	int index = 0;
	while (A[index] != '\0')
	{
		index++;
	}
	return index;
}



void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	float cnt[26] = { 0 },fre[26] = { 0 };
	int cnt_num = 0, KaiNum = 0;
	char *A = new char[501];
	
	fin >> A;

	for (int i = 0; i<Length(A); i++) //A가 65
	{
		if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
		{
			if (A[i] >= 65 && A[i] <= 90){	cnt[A[i] - 65]++;}
			else if (A[i] >= 97 && A[i] <= 122)
			{	cnt[A[i] - 97]++;}
			cnt_num++;
		}

	} 

	for (int i = 0; i<26; i++)
		fre[i] = cnt[i] / (float)cnt_num * 100;
	float Min = 10000000000;

	for (int i = 0; i<26; i++)
	{
		float KaiSquare = 0;
		for (int j = 0; j <= 25; j++)
		{
			if (j + i >= 26) {	KaiSquare += fre[j + i - 26] * fre[j + i - 26] / Alpha_Fre_Num[j];}

			else {	KaiSquare += fre[j + i] * fre[j + i] / Alpha_Fre_Num[j];}

		}
		if (Min > KaiSquare){	Min = KaiSquare;	KaiNum = i;}
	}


	for (int i = 0; i < Length(A); i++)
	{
		if ((A[i] >= 97 && A[i] <= 122) || (A[i] >= 65 && A[i] <= 90))
		{

			if (A[i] >= 97 && A[i] <= 122)
			{
				if (A[i] - KaiNum >= 97 && A[i] - KaiNum <= 122) { cout << (char)(A[i] - KaiNum); }
				else { cout << (char)(A[i] - KaiNum + 26); }
			}
			else if (A[i] >= 65 && A[i] <= 90)
			{
				if (A[i] - KaiNum <= 90 && A[i] - KaiNum >= 65) { cout << (char)(A[i] - KaiNum); }
				else { cout << (char)(A[i] - KaiNum + 26); }
			}

			else { cout << (char)(A[i] - KaiNum); }
		}
		else { cout << A[i]; }
	}
	cout << endl;



}
