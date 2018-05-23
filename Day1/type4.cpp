template <typename T>
void f(T* param);


int x = 22;            // int
const int* pcx = &x;   // pointer to const view of int (x)

f(&x);           // T = int, param = int*

f(pcx);          // T = const int , param = const int*
