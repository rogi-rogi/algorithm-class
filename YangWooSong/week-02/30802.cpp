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

int  main()
{
	Init();

	int n = 0;
	int size[6] = {};
	int t = 0;
	int p = 0;
	int total_shirt = 0;

	cin >> n;

	for (int i = 0; i < 6; ++i)
	{
		cin >> size[i];
	}

	cin >> t >> p;

	for (int i = 0; i < 6; ++i)
	{
		if (size[i] % t== 0)
			total_shirt += size[i] / t;
		else
			total_shirt += size[i] / t + 1;
	}

	cout << total_shirt << "\n";
	cout << n / p << " " << n % p;
	return 0;
}

