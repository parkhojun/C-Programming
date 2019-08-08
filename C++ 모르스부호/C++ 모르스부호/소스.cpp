#include <iostream>
#include <fstream>
#include <string>
/*********************/
/*     모르스부호    */
/*   20153181 박호준 */
/*********************/

using namespace std;
void hw(ifstream&);
using namespace std;
int ChangeMos(string A);

int main(void) {

	ifstream fin;


	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		hw(fin);
	}
	fin.close();

	return 0;
}

int ChangeMos(string A)
{
	string mos[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
	for (int i = 0; i < 26; i++)
	{
		if (A == mos[i])
		{
			return i;
		}

	}
	return NULL;
}

void hw(ifstream& fin) {// 파일 실체, 주소값 불러오기

	string input;
	string str;
	fin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '|')
		{
			cout << char('A' + ChangeMos(str));
			str.clear();
			continue;
		}
		if (input[i] == '#')
		{
			cout << char('A' + ChangeMos(str))<< "_";
			str.clear();
			continue;
		}
		str += input[i];
	}
	cout << char('A' + ChangeMos(str));
	cout << endl;

}
