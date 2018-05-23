#include <iostream>
#include <string>

using namespace std;

void process(const string& arg)
{
    cout << "lvalue process" << endl;
}

void process(string&& arg)
{
    cout << "rvalue process" << endl;
}

template <typename T>
void logAndProcess(T&& param)
{
    process(forward<T>(param));
}

int main()
{
    string s = "Some string";
    logAndProcess(s);
    logAndProcess(move(s));
    return 0;
}
