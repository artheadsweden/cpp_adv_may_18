template <typename T>
void f(const T& param);


int x = 22;         // int
const int cx = x;   // copy of x, const int
const int& rx = x;  // ref to const view of int (x)

f(x);           // T = int, param = const int&
f(cx);          // T = const int, param = const int&
f(rx);          // T = const int , param = const int&
