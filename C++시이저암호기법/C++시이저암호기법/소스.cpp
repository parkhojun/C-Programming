#include <iostream>
#include <fstream>

int Length(char *data);
void hw(std::ifstream&);

using namespace std;

int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{
		hw(fin);
		//std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}

int Length(char *data) {
	int index = 0;
	while (data[index] != '\0')
	{
		index++;
	}
	return index;
}

void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int j;
	int data_num;
	char data[100];

	fin >> data_num >> data;

	for (j = 0; j < Length(data); j++)
	{
		if ((data[j] >= 'A') && (data[j] <= 'Z')) {
			data[j] -= 'A';
			if ((data[j] + data_num) < 0) { data[j] += 26; }
			else {
				data[j] = (data[j] + data_num) % 26;
				data[j] += 'A';
			}
		}
		else if ((data[j] >= 'a') && (data[j] <= 'z')) {
			data[j] -= 'a';
			if ((data[j] + data_num) < 0) { data[j] += 26; }
			else {
				data[j] = (data[j] + data_num) % 26;
				data[j] += 'a';
			}
		}

	}
	cout << data << endl;


}
