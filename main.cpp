#include <iostream>
using namespace std;

int main() {
    int a, b, b1, b2, b3;
    cin >> a >> b;
    if (a <= 0 || a > 999 || b <= 0 || b > 999) return 0;
    b1 = b / 100;
    b2 = b % 100;
    b3 = b2 % 10;
    b2 = b2 / 10;
    cout << a * b3 << endl;
    cout << a * b2 << endl;
    cout << a * b1 << endl;
    cout << a * b;
}