#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    string tel;

    cin >> tel;

    string front = tel.substr(4, 4);
    string back = tel.substr(9, 4);

    tel.replace(4, 4, back);
    tel.replace(9, 4, front);

    cout << tel;
    return 0;
}