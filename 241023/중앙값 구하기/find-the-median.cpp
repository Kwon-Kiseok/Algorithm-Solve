#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c = 0;
    int mid = 0;

    cin >> a >> b >> c;
    if(a < b)
    {
        if(b < c)
        {
            cout << b;
        }
        else if(c < b)
        {
            cout << c;
        }
        else if(c < a)
        {
            cout << a;
        }
    }
    else
    {
        if(a < c)
        {
            cout << a;
        }
        else if(c < a && b > c)
        {
            cout << b;
        }
        else if(c < a && c < b)
        {
            cout << c;
        }
    }
    return 0;
}