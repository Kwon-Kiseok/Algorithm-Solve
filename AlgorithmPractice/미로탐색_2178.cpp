#include <iostream>
#include <queue>

// https://www.acmicpc.net/problem/2178

using namespace std;

int N = 0, M = 0;
// 동서남북 방향 배열
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

// 미로 베이스 배열
int arr[101][101] = { 0 };
// 방문 배열
bool visited[101][101] = { false, };
// 이동한 칸 기록용 배열
int dist[101][101];

// 탐색 좌표 저장용 큐
queue<pair<int, int>> q;

void bfs(int x, int y);

int main()
{
	cin >> N >> M;

	// 미로 배열 초기화
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

	// 모든 좌표를 탐색할 때까지 반복
	while (!q.empty())
	{
		// 현재 좌표 설정
		int curr_x = q.front().first;
		int curr_y = q.front().second;

		q.pop();

		// 상하좌우 인접 한 칸씩의 좌표 확인
		for (int i = 0; i < 4; i++)
		{
			int new_x = curr_x + dx[i];
			int new_y = curr_y + dy[i];

			// 새로 탐색하는 x, y좌표가 미로의 최대 범위를 벗어나는지, 방문했던 좌표인지, 방문할 수 있는(1) 좌표인지 검사
			if ((0 <= new_x && new_x < N) && (0 <= new_y && new_y < M) && !visited[new_x][new_y] && arr[new_x][new_y] == 1)
			{
				visited[new_x][new_y] = true;
				q.push(make_pair(new_x, new_y));
				dist[new_x][new_y] = dist[curr_x][curr_y] + 1;
			}
		}
	}
}