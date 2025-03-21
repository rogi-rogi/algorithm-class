#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	Init();

	int N = 0;
	int K = 0;
	int TotalCount = 0;
	vector<int> vCoinList;

	cin >> N >> K;

	for (int coin, i = 0; i < N; ++i)
	{
		cin >> coin;
		vCoinList.push_back(coin);
	}

	for (int i = vCoinList.size() - 1; i >= 0; --i)
	{
		if (vCoinList[i] <= K)
		{
			int Count = K / vCoinList[i];
			TotalCount += Count;
			K -= Count * vCoinList[i];
		}
	}

	cout << TotalCount;

	return 0;
}