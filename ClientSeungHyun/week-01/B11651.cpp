#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool SortPair(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}

	return a.second < b.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> Pairs;

	int iN;
	int iX; int iY;

	cin >> iN;

	for (int i = 0; i < iN; ++i) {
		cin >> iX;
		cin >> iY;

		Pairs.push_back({ iX,iY });
	}

	sort(Pairs.begin(), Pairs.end(), SortPair);

	for (auto P : Pairs)
	{
		cout << P.first << " " << P.second << "\n";
	}

	return 0;
}