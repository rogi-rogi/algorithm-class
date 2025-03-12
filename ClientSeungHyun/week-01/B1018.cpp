#include <iostream>
#include<string>

using namespace std;

string strBW[8] =
{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

string strWB[8] =
{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string strBoard[50];

int Check_BW(int iX, int iY)
{
	int iCnt = 0;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j <  8; ++j)
		{
			if (strBoard[i + iX][j + iY] != strBW[i][j])
				++iCnt;
		}
	}

	return iCnt;
}

int Check_WB(int iX, int iY)
{
	int iCnt = 0;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (strBoard[i + iX][j + iY] != strWB[i][j])
				++iCnt;
		}
	}

	return iCnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int iN{}, iM{};
	int iMin{ 65 };

	cin >> iN >> iM;
	cin.ignore();

	for (int i = 0; i < iN; ++i)
	{
		getline(cin, strBoard[i]);
	}

	for (int i = 0; i + 8 <= iN; ++i)
	{
		for (int j = 0; j + 8 <= iM; ++j)
		{
			iMin = min(iMin, min(Check_WB(i, j), Check_BW(i, j)));
		}
	}

	cout << iMin;

	return 0;

}