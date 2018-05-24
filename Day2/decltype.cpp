#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
auto adder(T1 a, T2 b) -> decltype(a+b)
{
	return a + b;
}

template <typename T1, typename T2>
auto adder2(T1 a, T2 b)
{
	return a + b;
}


int main()
{
	cout << adder2(3.4, 6) << endl;
	cout << adder2<string, string>("hi ", "there") << endl;

	int x = 10;
	const int cx = x;

	auto ax = cx;
	decltype(cx) dx = cx;
	decltype((cx)) dx2 = cx;

	system("pause");
	return 0;
}