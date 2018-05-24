#include <iostream>

using namespace std;

int main()
{
	auto funcfact = [](int x)
	{
		return [=](int y) {
			return x * y;
		};
	};

	auto times2 = funcfact(2);
	auto times3 = funcfact(3);

	cout << times2(5) << endl;
	cout << times3(5) << endl;

	system("pause");
	return 0;
}