#include <iostream>
using namespace std;

int main() {
    int a, b, mul = 1;
    cin >> a >> b;
    if (a <= 0 || b >= 10) return 0;
    mul = a * b;
    cout << mul;
}
