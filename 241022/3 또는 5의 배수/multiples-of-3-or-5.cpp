#include <iostream>
using namespace std;

void func(int a, int b);

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 0;

    cin >> a;

    func(a, 3);
    func(a, 5);
    
    return 0;
}

void func(int a, int b)
{
    if(a % b == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}