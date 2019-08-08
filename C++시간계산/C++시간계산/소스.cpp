/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                            �ð����                                    *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/

#include <iostream>
#include <fstream>


void hw(std::ifstream&);


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


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int w = 0, x = 0, y = 0, z = 0; //�ð� ����� ���� ���� (day , hours, minute, second)
	int i, input;
	int Hour, Minute, Second, hour, minute, second;

	
	fin >> input; // �Է� �� �ֱ�

	for (i = 0; i < input; i++)// ���̽� �ݺ��ϱ�
	{
		fin >> Hour >> Minute >> Second >> hour >> minute >> second;

		w += (hour - Hour);
		x += (minute - Minute);
		y += (second - Second);

		if (x < 0) {
			x = 60 + x;
			w--;
		}
		if (y < 0) {
			y = 60 + y;
			x--;
		}
		if (y >= 60) {
			x++;
			y -= 60;
		}
		if (x >= 60) {
			w++;
			x -= 60;
		}
		if (w >= 24) {
			z++;
			w -= 24;
		}

		
	}
	std::cout << z << ' ' << w << ' ' << x << ' ' << y << std::endl;
}
