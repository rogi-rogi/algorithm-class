#include <iostream>
using namespace std;


void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int GetNum(int k, int n)
{
	if (n == 1)
		return 1;
	else if (k == 0)
		return n;
	return GetNum(k, n - 1) + GetNum(k - 1, n);;
}

int  main()
{
	Init();

	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int k = 0;
		int n = 0;

		cin >> k;
		cin >> n;


		cout << GetNum(k, n) << "\n";
	}

	return 0;
}

