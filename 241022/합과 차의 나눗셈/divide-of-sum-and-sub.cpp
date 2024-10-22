#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b = 0;

    cin >> a >> b;

    float result = ((float)(a+b)/(a-b));

    cout << fixed;
    cout.precision(2);
    cout << result;
    return 0;
}