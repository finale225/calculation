#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= 0 || b >= 10 || b == 0) return 0;
    cout.precision(10);
    cout << (double) a / b;
}