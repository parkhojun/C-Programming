#include<string>
#include<iostream>
#include<vector>
class worker {
private:
	std::string name;
	int salary;

public:
	worker() //������ �Լ�, ���� �� �� ����
		:name("����"), salary(0)
	{
		std::cout << "Default,Default" << std::endl;
		//name = "����";
		//salary = 0;
	}

	worker(const std::string& _name)
		:name(_name), salary(0)
	{
		std::cout << "Name,Default" << std::endl;
	}

	worker(const std::string& _name, int _salary)
		:name(_name), salary(_salary)
	{
		std::cout << "Name,Salary" << std::endl;
	}

	~worker()//�Ҹ���
	{
		std::cout << "Destructor" << std::endl;
	}
	void set_name(const std::string& _name) { name = _name; }
	std::string get_name() const { return name; }

	int get_salary() const { return salary; }
	void clac_salary() { salary = 1000; }
};

class Fworker : public worker {
	//private:
	//std::string name;
	//int salary;
public:
	Fworker()
		//:name("a"),salary(0)     - �� �θ��� private �̱⿡ ����.->�θ� protected�� �����ϱ���..but������ ȣ���� ����
		:worker()     //����� ���ÿ� �ʱ�ȭ �̹Ƿ� ����/���� Ŭ������ ����Ʈ��Ʈ�� �θ� �� ����
	{                 //
					  //worker();   //�����ڴ� �Լ� ������ �ƹ��� ȣ�� �Ұ���
		std::cout << "Fworker:D,D" << std::endl;
	}
	Fworker(const std::string& _name)
		:worker(_name)
	{
		std::cout << "Fworker:N,D" << std::endl;
	}
	Fworker(const std::string& _name, int _salary)
		:worker(_name, _salary)
	{
		std::cout << "Fworker:N,S" << std::endl;
	}

};

class Tworker : public worker {
	//private:
	//std::string name;
	//int salary;
public:
	Tworker()
		:worker()
	{
		std::cout << "Tworker:D,D" << std::endl;
	}
	Tworker(const std::string& _name)
		:worker(_name)
	{
		std::cout << "Tworker:N,D" << std::endl;
	}
	Tworker(const std::string& _name, int _salary)
		:worker(_name, _salary)
	{
		std::cout << "Tworker:N,S" << std::endl;
	}
};

int main() {

	std::vector<worker *> worker;
	worker.push_back(new Fworker("Junho", 100));
	worker.push_back(new Tworker("AAA"));
	worker.push_back(new Tworker("BBB"));
	worker.push_back(new Fworker("C++", 1000));




	return 0;
}