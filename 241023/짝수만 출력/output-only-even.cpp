#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b = 0;
    cin >> a >> b;
    
    int i = a;
    while(i <= b)
    {
        if(i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}