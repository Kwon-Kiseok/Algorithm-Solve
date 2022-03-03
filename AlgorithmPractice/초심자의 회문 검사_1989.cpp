#include <iostream>
#include <string>

//https://swexpertacademy.com/main/code/problem/problemDetail.do

//"level" 과 같이 거꾸로 읽어도 제대로 읽은 것과 같은 문장이나 낱말을 회문(回文, palindrome)이라 한다.
//단어를 입력 받아 회문이면 1을 출력하고, 아니라면 0을 출력하는 프로그램을 작성하라.
//[제약 사항]
//각 단어의 길이는 3 이상 10 이하이다.
//[입력]
//가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
//각 테스트 케이스의 첫 번째 줄에 하나의 단어가 주어진다.
//[출력]
//출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.

using namespace std;

int main()
{
	int T = 0;
	string str = "";
	string::iterator frontIt;
	string::iterator endIt;

	cin >> T;

	for (int tc = 1; tc <= T; ++tc)
	{
		cin >> str;
		int length = str.length();
		bool symmetry = true;

		// iterator를 사용하여 문장의 맨 앞쪽과 뒤쪽을 받아옴
		frontIt = str.begin();
		endIt = str.end()-1;

		// 전체 길이의 절반이 되는 곳까지 회문을 검사함
		for (int idx = 0; idx < length / 2; ++idx)
		{
			// idx를 증감시켜주며 글자를 하나씩 이동시킴
			frontIt += idx;
			endIt -= idx;

			// 문자열 비교하여 다르다면 결과로 0을 출력하고 회문이 아니므로 중단
			if (*frontIt != *endIt)
			{
				cout << "#" << tc << " 0" << endl;
				symmetry = false;
				break;
			}
		}
		// 대칭이 맞다면 1을 출력함
		if (symmetry)
			cout << "#" << tc << " 1" << endl;
	}

	return 0;
}