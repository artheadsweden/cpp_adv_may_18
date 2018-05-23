int x = 22;         // int
const int cx = x;   // copy of x, const int
const int& rx = x;  // ref to const view of int (x)


auto& v1 = x;   // v1's type = int&, auto = int
auto& v2 = cx;  // v2's type = const int&, auto = const int
auto& v3 = rx;  // v3's type = const int&, auto = const int

const auto& v4 = x;  // v4's type = const int&, auto = int
const auto& v5 = cx; // v5's type = const int&, auto = const int
const auto& v6 = rx; // v6's type = const int&, auto = const int
