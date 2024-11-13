#include <iostream>
#include <vector>
#include <algorithm>

// https://www.acmicpc.net/problem/1931

using namespace std;

int main()
{
	int N = 0, startT = 0, endT = 0, answer = 0;

	vector<pair<int, int>> vec;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> startT >> endT;
		// endT를 기준으로 정렬하기 위해 순서를 바꿔서 넣어줌
		vec.push_back(make_pair(endT, startT));
	}
	// 제일 일찍 끝나는 타임이 앞에 와야 최대한 많은 회의를 할 수 있음
	sort(vec.begin(), vec.end());

	int meetEndTime = vec[0].first;
	answer = 1;

	for (int i = 1; i < N; i++)
	{
		if (vec[i].second >= meetEndTime)
		{
			answer++;
			meetEndTime = vec[i].first;
		}
	}

	cout << answer;

	return 0;
}
