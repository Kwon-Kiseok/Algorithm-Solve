#include <iostream>

// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PTeo6AHUDFAUq

using namespace std;

int main()
{
	int N = 0;

	cin >> N;

	for (int n = 1; n <= N; ++n)
	{
		int temp = n;
		while (temp > 0)
		{
			if (temp % 10 == 3)
				cout << "-";
			else if (temp % 10 == 6)
				cout << "-";
			else if (temp % 10 == 9)
				cout << "-";
			else
			{
				if(temp < 10 && n%10 != 3 && n%10 != 6 && n%10 != 9)
					cout << n;
			}
			temp /= 10;
		}
		cout << " ";
	}

	return 0;
}