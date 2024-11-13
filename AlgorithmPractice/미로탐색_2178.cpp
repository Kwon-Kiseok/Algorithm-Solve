#include <iostream>
#include <queue>

// https://www.acmicpc.net/problem/2178

using namespace std;

int N = 0, M = 0;
// �������� ���� �迭
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

// �̷� ���̽� �迭
int arr[101][101] = { 0 };
// �湮 �迭
bool visited[101][101] = { false, };
// �̵��� ĭ ��Ͽ� �迭
int dist[101][101];

// Ž�� ��ǥ ����� ť
queue<pair<int, int>> q;

void bfs(int x, int y);

int main()
{
	cin >> N >> M;

	// �̷� �迭 �ʱ�ȭ
	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;

		for (int j = 0; j < M; j++)
		{
			arr[i][j] = input[j] - '0';
		}
	}

	bfs(0, 0);

	cout << dist[N - 1][M - 1];

	return 0;
}

void bfs(int x, int y)
{
	visited[x][y] = true;
	q.push(make_pair(x, y));
	dist[x][y]++;

	// ��� ��ǥ�� Ž���� ������ �ݺ�
	while (!q.empty())
	{
		// ���� ��ǥ ����
		int curr_x = q.front().first;
		int curr_y = q.front().second;

		q.pop();

		// �����¿� ���� �� ĭ���� ��ǥ Ȯ��
		for (int i = 0; i < 4; i++)
		{
			int new_x = curr_x + dx[i];
			int new_y = curr_y + dy[i];

			// ���� Ž���ϴ� x, y��ǥ�� �̷��� �ִ� ������ �������, �湮�ߴ� ��ǥ����, �湮�� �� �ִ�(1) ��ǥ���� �˻�
			if ((0 <= new_x && new_x < N) && (0 <= new_y && new_y < M) && !visited[new_x][new_y] && arr[new_x][new_y] == 1)
			{
				visited[new_x][new_y] = true;
				q.push(make_pair(new_x, new_y));
				dist[new_x][new_y] = dist[curr_x][curr_y] + 1;
			}
		}
	}
}