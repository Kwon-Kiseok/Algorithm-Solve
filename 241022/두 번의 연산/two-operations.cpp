#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 0;
    cin >> a;

    if(a % 2 != 0)
    {
        a += 3;
    }
    if(a % 3 == 0)
    {
        a /= 3;
    }
    cout << a;
    return 0;
}