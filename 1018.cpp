#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char cBoard[50][50] = {};
	char cAnswer1[8][8] = {
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
	};
	char cAnswer2[8][8] = {
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
							'B','W','B','W','B','W','B','W',
							'W','B','W','B','W','B','W','B',
	};
	int n(0), m(0), iCount(50*50);

	cin >> n >> m;

	//입력받기
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> cBoard[i][j];
		}
	}

	//정답과 비교하기
	for (int i = 0; i <= n - 8; ++i)
	{
		for (int j = 0; j <= m - 8; ++j)
		{
			int itmp(0);
			for (int k = 0; k < 8; ++k)
			{
				for (int l = 0; l < 8; ++l)
				{
					if (cBoard[i + k][j + l] != cAnswer1[k][l])
						itmp++;
				}
			}
			if (itmp < iCount)
				iCount = itmp;
		}

	}

	for (int i = 0; i <= n - 8; ++i)
	{
		int itmp(0);
		for (int j = 0; j <= m - 8; ++j)
		{
			int itmp(0);
			for (int k = 0; k < 8; ++k)
			{
				for (int l = 0; l < 8; ++l)
				{
					if (cBoard[i + k][j + l] != cAnswer2[k][l])
						itmp++;
				}
			}
			if (itmp < iCount)
				iCount = itmp;
		}


	}

	cout << iCount << endl;
	return 0;
}