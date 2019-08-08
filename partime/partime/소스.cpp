#include <iostream>
#include <vector>

class Worker
{
public:
	virtual int request_salary() const = 0;

};

class PermanentWorker : public Worker
{
public:
	virtual int request_salary() const
	{
		std::cout << "Give me 300 man-won" << std::endl;
	}

};

class PartTimeWorker : public Worker
{
private:
	int work_time;
public:
	PartTimeWorker(int _time)
		: worker_time(_time)
	{ }
	virtual int request_salary() const
	{
		std::cout << "Give me " << work_time * 15 << std::endl;
	}

	int get_work_time() const { return work_time; }
	void set_work_time(int _time) { work_time = _time; }

};

int main()
{
	// std::vector<PermanentWorker>	pm_workers;
	// std::vector<PartTimeWorker>	pm_workers;

	std::vector<Worker*>		workers;

	workers.push_back(new PermanentWorker());
	workers.push_back(new PermanentWorker());
	workers.push_back(new PartTimeWorker(0));
	workers.push_back(new PartTimeWorker(10));
	workers.push_back(new PermanentWorker());
	workers.push_back(new PermanentWorker());
	for (unsigned int i = 0; i < workers.size(); i++)
		workers[i]->request_salary();
}