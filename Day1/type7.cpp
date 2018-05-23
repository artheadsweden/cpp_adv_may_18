template <typename T>
void f(T param);

void somefunc(const int* const param)
{
    auto p1 = param;

}
int x = 22;         // int
const int cx = x;   // copy of x, const int
const int& rx = x;  // ref to const view of int (x)

f(x);           // T = int, param = int
f(cx);          // T = int, param = int
f(rx);          // T = int, param = int
