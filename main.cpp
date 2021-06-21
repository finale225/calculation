#include <iostream>
using namespace std;

int main() {
    int a, b, b1, b2, b3; // 입력받을 변수 a,b와 b의 100의 자리, 10의 자리, 1의 자리 숫자를 나타내는 변수 b1, b2, b3
    cin >> a >> b;
    if (a <= 0 || a > 999 || b <= 0 || b > 999) return 0; // 세자리 자연수로 제한
    b1 = b / 100; // b1은 b를 100으로 나눈 몫
    b2 = b % 100; // b2를 b를 100으로 나눈 나머지 값으로 잠시 설정
    b3 = b2 % 10; // b3는 b2를 10으로 나눈 나머지 값. 즉 b의 1의 자리 숫자
    b2 = b2 / 10; // b2를 10으로 나눈 몫으로 b2를 다시 설정
    cout << a * b3 << endl; // b의 1의 자리 숫자와 a를 곱한 값
    cout << a * b2 << endl; // b의 10의 자리 숫자와 a를 곱한 값
    cout << a * b1 << endl; // b의 100의 자리 숫자와 a를 곱한 값
    cout << a * b; // a와 b를 곱한 값
}
