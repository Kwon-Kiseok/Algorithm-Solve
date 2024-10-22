#include <iostream>
using namespace std;

void Swap(int &a, int &b);

int main() {
    // 여기에 코드를 작성해주세요.

    int a = 5, b = 6, c = 7;

    Swap(a, c);
    printf("%d\n", a);
    Swap(c, a);
    Swap(a, b);
    printf("%d\n", b);
    Swap(b, a);
    Swap(b, c);
    printf("%d\n", c);


    return 0;
}

void Swap(int &a, int &b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}