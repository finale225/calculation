#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    if (a <= 0 || b >= 10) return 0;
    sum = a + b;
    cout << sum;
}
