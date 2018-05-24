#include <iostream>
#include <thread>
#include <functional>

using namespace std;

// This is real RAII
class ThreadGuard
{
public:
	explicit ThreadGuard(function<void()> f) 
	{
		t = new thread(f);
	}
	~ThreadGuard()
	{
		if (t->joinable())
		{
			t->join();
		}
		delete t;
	}
	ThreadGuard(const ThreadGuard&) = delete;
	ThreadGuard& operator=(const ThreadGuard&) = delete;
private:
	thread* t;
};

int main()
{
	{	
		ThreadGuard tg([] {std::cout << "Hi from thread" << endl; });
		std::cout << "Thread is going" << endl;
	}
	std::cout << "Thread is done" << endl;
	std::system("pause");
	return 0;
}