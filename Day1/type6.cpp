template <typename T>
void f(T&& param);


int x = 22;         // int
const int cx = x;   // copy of x, const int
const int& rx = x;  // ref to const view of int (x)

f(x);           // x is lvalue -> T = int&, param = int&
f(cx);          // cx is lvalue -> T = const int&, param = const int&
f(rx);          // rx is lvalue -> T = const int&  , param = const int&
f(5);           // 5 is rvalue -> T = int, param = int&&
