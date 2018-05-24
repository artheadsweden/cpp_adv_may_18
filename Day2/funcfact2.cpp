#include <iostream>
#include <functional>
using namespace std;

function<int(int)> funcfact(int x)
{
	return [=](int y) {return x * y; };
}

int main()
{
	function<int(int)> times2 = funcfact(2);
	function<int(int)> times3 = funcfact(3);

	cout << times2(5) << endl;
	cout << times3(5) << endl;
	system("pause");
	return 0;
}