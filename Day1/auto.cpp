#include <iostream>
#include <string>

using namespace std;

void str_func(string&& str)
{
   cout << str << endl;
}

int main()
{
    string str1 = "Hi there";

   // str_func(move(str1));
    string str2 = move(str1);
    cout << "!" << str1 << "!" << endl;
    cout << "!" << str2 << "!" << endl;
    return 0;
}
