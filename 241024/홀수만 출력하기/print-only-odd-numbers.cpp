#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N = 0, input = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(input % 2 != 0 && input % 3 == 0)
        {
            cout << input << endl;
        }
    }
    return 0;
}