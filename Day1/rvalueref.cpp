#include <iostream>

using namespace std;

void myfunc(int&& a)
{
    cout << "a is rvalue" << endl;
}

void myfunc(int& a)
{
    cout << "a is lvalue" << endl;
}

int main()
{
    int x = 10;
    myfunc(x);
}
