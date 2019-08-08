#include<string>
#include<iostream>
#include<vector>
class worker {
private:
	std::string name;
	int salary;

public:
	worker() //생성자 함수, 리턴 값 안 적음
		:name("무명"), salary(0)
	{
		std::cout << "Default,Default" << std::endl;
		//name = "무명";
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

	~worker()//소멸자
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
		//:name("a"),salary(0)     - 는 부모의 private 이기에 오류.->부모를 protected로 가능하긴함..but생성자 호출이 나음
		:worker()     //선언과 동시에 초기화 이므로 가능/하위 클래스의 컨스트럭트만 부를 수 있음
	{                 //
					  //worker();   //생성자는 함수 이지만 아무나 호출 불가능
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