#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b, c = 0;

    cin >> a >> b >> c;
    
    if(a < b && b < c)
        cout << b;
    else if(c < b && b < a)
        cout << b;
    else if(a < c && c < b)
        cout << c;
    else if(b < c && c < a)
        cout << c;
    else if(b < a && a < c)
        cout << a;
    else if(c < a && a < b)
        cout << a;
    
    return 0;
}