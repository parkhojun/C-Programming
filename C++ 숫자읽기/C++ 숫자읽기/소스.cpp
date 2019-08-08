#include <iostream>
#include <fstream>
#include <string>


using namespace std;
void hw(std::string str);

string Number_of_one(int i)
{
	if (i == 0){return "";}
	string one[9] = { "_One","_Two","_Three","_Four","_Five","_Six","_Seven","_Eight","_Nine" };
	return one[i - 1];
}
string Number_of_ten(int i)
{
	string ten[10]= { "_Ten","_Eleven","_Twelve","_Thirteen","_Fourteen","_Fifteen","_Sixteen","_Seventeen","_Eighteen","_Nineteen" };
	return ten[i];
}
string Number_of_ten2(int i)
{
	if (i == 0){ return "";}
	string a[10] = { "_Twenty","_Thirty","_Forty","_Fifty","_Sixty","_Seventy","_Eighty","_Ninety" };
	return a[i - 2];
}


int main(void) {

	ifstream fin;
	string input;
	string Read_number;
	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		Read_number = "0000000000";
		fin >> input;
		Read_number.insert(10 - input.length(), input);
		hw(Read_number);
	}
	fin.close();

	return 0;
}
void hw(string str)
{
	string Position_of_number;

	if (str[8] == '1')
	{
		Position_of_number.insert(0, Number_of_ten(str[9] - '0'));
	}
	else
	{
		Position_of_number.insert(0, Number_of_one(str[9] - '0'));
		Position_of_number.insert(0, Number_of_ten2(str[8] - '0'));
	}
	if (str[7] != '0')
	{
		Position_of_number.insert(0, "_Hundred");
		Position_of_number.insert(0, Number_of_one(str[7] - '0'));
	}

	if (str[4] != '0' || str[5] != '0' || str[6] != '0') {
		Position_of_number.insert(0, "_Thousand");
		if (str[5] == '1')
		{
			Position_of_number.insert(0, Number_of_ten(str[6] - '0'));
		}
		else
		{
			Position_of_number.insert(0, Number_of_one(str[6] - '0'));
			Position_of_number.insert(0, Number_of_ten2(str[5] - '0'));
		}
		if (str[4] != '0')
		{
			Position_of_number.insert(0, "_Hundred");
			Position_of_number.insert(0, Number_of_one(str[4] - '0'));
		}
	}

	if (str[1] != '0' || str[2] != '0' || str[3] != '0') {
		Position_of_number.insert(0, "_Million");
		if (str[2] == '1')
		{
			Position_of_number.insert(0, Number_of_ten(str[3] - '0'));
		}
		else
		{
			Position_of_number.insert(0, Number_of_one(str[3] - '0'));
			Position_of_number.insert(0, Number_of_ten2(str[2] - '0'));
		}
		if (str[1] != '0')
		{
			Position_of_number.insert(0, "_Hundred");
			Position_of_number.insert(0, Number_of_one(str[1] - '0'));
		}
	}
	if (str[0] != '0')
	{
		Position_of_number.insert(0, "_Billion");
		Position_of_number.insert(0, Number_of_one(str[0] - '0'));
	}
	if (Position_of_number[0] == '_')
	{
		Position_of_number.erase(0, 1);
	}
	cout << Position_of_number << endl;


}
