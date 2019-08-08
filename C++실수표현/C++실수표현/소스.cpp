#include<cstdio>
#include<iostream>
#include<string>
#include<vector>

//using namespace std;


bool seperator_e_part(const std::string&_str, std::string&_p1, std::string&_p2);
bool seperator_dot_part(const std::string&_str, std::string&_p1, std::string&_p2);


int main()
{
	std::vector<std::string> test_case;

	test_case.push_back("00123.456");
	test_case.push_back("123456.e-3");
	test_case.push_back(".");
	test_case.push_back("12.34.56");
	test_case.push_back("abc");

	for (int i = 0; i < test_case.size(); i++) {

		std::string before_e, after_e;
		std::string& str = test_case[i];
		bool res;

		seperator_e_part(str, before_e, after_e);
		seperator_dot_part(before_e, before_dot, after_dot);
		
		/*unsigned int dot_cnt = 0;
		for (int i = 0; i < before_e.size();i++)
		{
			char ch = before_e[i];
			if (ch == '.')
				++dot_cnt;

		}*/
		res = has_dot(before_dot);





	}
}


bool has_dot(const std::string&_str)
{
	for (int i = 0; i < _str.size(); i++)
	{
		char ch = before_e[i];
		if (ch == '.')
			++dot_cnt;

	}

}