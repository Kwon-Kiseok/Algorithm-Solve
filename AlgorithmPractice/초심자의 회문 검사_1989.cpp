#include <iostream>
#include <string>

//https://swexpertacademy.com/main/code/problem/problemDetail.do

//"level" �� ���� �Ųٷ� �о ����� ���� �Ͱ� ���� �����̳� ������ ȸ��(����, palindrome)�̶� �Ѵ�.
//�ܾ �Է� �޾� ȸ���̸� 1�� ����ϰ�, �ƴ϶�� 0�� ����ϴ� ���α׷��� �ۼ��϶�.
//[���� ����]
//�� �ܾ��� ���̴� 3 �̻� 10 �����̴�.
//[�Է�]
//���� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����, �� �Ʒ��� �� �׽�Ʈ ���̽��� �־�����.
//�� �׽�Ʈ ���̽��� ù ��° �ٿ� �ϳ��� �ܾ �־�����.
//[���]
//����� �� ���� '#t'�� �����ϰ�, ������ �� ĭ �� ���� ������ ����Ѵ�.

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

		// iterator�� ����Ͽ� ������ �� ���ʰ� ������ �޾ƿ�
		frontIt = str.begin();
		endIt = str.end()-1;

		// ��ü ������ ������ �Ǵ� ������ ȸ���� �˻���
		for (int idx = 0; idx < length / 2; ++idx)
		{
			// idx�� ���������ָ� ���ڸ� �ϳ��� �̵���Ŵ
			frontIt += idx;
			endIt -= idx;

			// ���ڿ� ���Ͽ� �ٸ��ٸ� ����� 0�� ����ϰ� ȸ���� �ƴϹǷ� �ߴ�
			if (*frontIt != *endIt)
			{
				cout << "#" << tc << " 0" << endl;
				symmetry = false;
				break;
			}
		}
		// ��Ī�� �´ٸ� 1�� �����
		if (symmetry)
			cout << "#" << tc << " 1" << endl;
	}

	return 0;
}