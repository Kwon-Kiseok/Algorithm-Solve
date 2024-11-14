#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/5347

long long gcd(long long a, long long b);
long long lcm(long long a, long long b);

int main() {
    long long a, b;
    long long n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
    return 0;
}

long long gcd(long long a, long long b)
{
    long long A, B;
    if (a > b)
    {
        A = a;
        B = b;
    }
    else
    {
        A = b;
        B = a;
    }
    if (B == 0)
    {
        return A;
    }
    return gcd(B, A % B);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}