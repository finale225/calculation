/*#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    if (a <= 0 || b >= 10) return 0;
    sum = a + b;
    cout << sum;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int a, b, mul = 1;
    cin >> a >> b;
    if (a <= 0 || b >= 10) return 0;
    mul = a * b;
    cout << mul;
}*/

#include <iostream>
using namespace std;

int main() {
    double a, b;
    double div = 1;
    cin >> a >> b;
    if (a <=0 || b >= 10 || b == 0) return 0;
    div = a / b;
    cout.precision(30);
    cout << div;
}