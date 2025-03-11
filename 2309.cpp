#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Sum = 0;
	vector<int> HeightList;
	for (int i = 0; i < 9; ++i)
	{
		int n = 0;
		cin >> n;
		HeightList.push_back(n);
		Sum += HeightList[i];
	}

	sort(HeightList.begin(), HeightList.end());

	int notReal1 = 0, notReal2 = 0;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = i + 1; j < 9; ++j)
		{
			if (Sum - HeightList[i] - HeightList[j] == 100)
			{
				notReal1 = i;
				notReal2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; ++i)
	{
		if (i != notReal1 && i != notReal2)
			cout << HeightList[i] << "\n";
	}

	return 0;
}