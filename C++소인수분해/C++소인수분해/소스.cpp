#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <cmath>

bool is_prime_number(int n, const std::vector <int> &);
int calc_power(int n, int prime_num);
void hw_5(std::ifstream&);




int main()
{
	int num;
	std::ifstream fin;

	fin.open("input.txt");

	fin >> num;

	for (int i = 0; i < num; i++)
		hw_5(fin);
	fin.close();

	return 0;
}

void hw_5(std::ifstream& fin)
{
	std::vector< std::pair<int, int> >   factorization;
	std::vector<int>   prime_numbers;

	int number;
	fin >> number;


	for (unsigned int i = 2; i<10001; ++i)
	{
		bool res = is_prime_number(i, prime_numbers);
		if (res == false)
			continue;

		prime_numbers.push_back(i);



		int power = calc_power(number, i);
		if (power == 0)
			continue;

		factorization.push_back(std::make_pair(i, power));
	}
	std::cout << factorization.size() << " ";
	for (unsigned int i = 0; i<factorization.size(); ++i)
	{
		std::cout << factorization[i].first << " " << factorization[i].second << " ";
	}
	std::cout << " " << std::endl;
}
bool is_prime_number(int n, const std::vector<int> & prime_numbers)
{
	for (int i = 0; i<prime_numbers.size(); i++)
	{
		int prime = prime_numbers[i];

		if (n%prime == 0)
			return false;
	}

	return true;
}

int calc_power(int n, int prime_num)
{
	int power = 0;

	while (n%prime_num == 0)
	{
		++power;
		n /= prime_num;
	}

	return power;
}
