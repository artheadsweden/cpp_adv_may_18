#include <iostream>
#include <vector>
#include <string>
using namespace std;
template <typename T>
void f(T param)
{
}

int main()
{
    vector<int> v1 {1, 2, 3, 4};
    float f {3.4};
    string s {"Hi there"};

    auto a1 {1};
    auto a2 = {2};
    auto a3 = {1,2,3};
   // auto a4 {1,2,3};

    f(a3);
    return 0;
}
