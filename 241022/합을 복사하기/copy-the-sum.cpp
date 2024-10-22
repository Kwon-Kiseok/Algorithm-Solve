#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 1, b = 2, c = 3;

    int sum = a + b+ c;

    a = sum;
    b = sum;
    c = sum;

    printf("%d %d %d", a, b, c);
    return 0;
}