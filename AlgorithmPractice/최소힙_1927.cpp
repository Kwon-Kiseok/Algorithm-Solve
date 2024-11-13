#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// https://www.acmicpc.net/problem/1927

int main()
{
	int N = 0;
	int x = 0;

	vector<int> result;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x;

		if (x == 0)
		{
			if (!pq.empty())
			{
				result.push_back(pq.top());
				pq.pop();

			}
			else
			{
				result.push_back(0);
			}
		}
		else
		{
			pq.push(x);
		}
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}