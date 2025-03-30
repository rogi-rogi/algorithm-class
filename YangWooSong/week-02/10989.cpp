#include <iostream>
#include <algorithm>

using namespace std;

void Init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	Init();

	int iCountArr[10000] = {};
	int iNum(0), tmp;

	cin >> iNum;

	for (int i = 0; i < iNum; ++i)
	{
		cin >> tmp;
		iCountArr[tmp - 1] += 1;
	}

	for (int i = 0; i < 10000;)
	{
		if (iCountArr[i] != 0)
		{
			cout << i + 1 << "\n";
			iCountArr[i] -= 1;
		}
		else
			i++;
	}
	return 0;
}
