#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/1912

int N = 0, answer = 0;
// 수열이 들어갈 배열
int nums[100000];
// 부분 구간 합을 저장할 배열
int maxSum[100000];

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}

	// 정답 초기값 설정(+ 가장 첫 수가 제일 크고 나머지가 작은 경우도 처리 가능)
	answer = nums[0];

	for (int i = 0; i < N; i++)
	{
		// 일단 수열에 있는 현재 i가 가장 크다는 가정하에 값 삽입
		maxSum[i] = nums[i];
		if (i == 0) continue;
		// 만약 그것보다 이전까지의 수열이 가장 크다면 끊어줌(i번째에서 끝나는 제일 큰 연속합)
		if (maxSum[i] < maxSum[i - 1] + nums[i])
		{
			maxSum[i] = maxSum[i - 1] + nums[i];
		}
		// 현재까지 정답보다 크다면 최대값을 바꿔줌
		if (maxSum[i] > answer)
		{
			answer = maxSum[i];
		}
	}

	cout << answer;

	return 0;
}