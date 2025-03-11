#include <iostream>
#include<cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> Persons;

	int iHeight{};
	int iTotal{};

	int iResult[2];

	for (int i = 0; i < 9; ++i)
	{
		cin >> iHeight;
		Persons.emplace_back(iHeight);

		iTotal += iHeight;
	}

	sort(Persons.begin(), Persons.end());

	for (int i = 0; i < 9; ++i)
	{
		for (int j = i + 1; j < 9; ++j)
		{
			if (Persons[i] + Persons[j] == iTotal - 100)
			{
				iResult[0] = Persons[i];
				iResult[1] = Persons[j];
			}
		}
	}

	for (auto& P : Persons)
	{
		if (P == iResult[0] || P == iResult[1])
			continue;
		cout << P << " ";
	}

	return 0;
}