#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/1912

int N = 0, answer = 0;
// ������ �� �迭
int nums[100000];
// �κ� ���� ���� ������ �迭
int maxSum[100000];

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}

	// ���� �ʱⰪ ����(+ ���� ù ���� ���� ũ�� �������� ���� ��쵵 ó�� ����)
	answer = nums[0];

	for (int i = 0; i < N; i++)
	{
		// �ϴ� ������ �ִ� ���� i�� ���� ũ�ٴ� �����Ͽ� �� ����
		maxSum[i] = nums[i];
		if (i == 0) continue;
		// ���� �װͺ��� ���������� ������ ���� ũ�ٸ� ������(i��°���� ������ ���� ū ������)
		if (maxSum[i] < maxSum[i - 1] + nums[i])
		{
			maxSum[i] = maxSum[i - 1] + nums[i];
		}
		// ������� ���亸�� ũ�ٸ� �ִ밪�� �ٲ���
		if (maxSum[i] > answer)
		{
			answer = maxSum[i];
		}
	}

	cout << answer;

	return 0;
}