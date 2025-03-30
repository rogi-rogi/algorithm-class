#include <iostream>
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

	while (1)
	{
		int n[3] = { 0 };
		cin >> n[0] >> n[1] >> n[2];

		if (n[0] == 0 && n[1] == 0 && n[2] == 0)
			break;

		int biggest = 0;
		for (int i = 0; i < 3; ++i)
		{
			if (biggest < n[i])
				biggest = n[i];
		}

		int sum = 0;
		for (int i = 0; i < 3; ++i)
		{
			if (biggest != n[i])
				sum += n[i] * n[i];
		}

		if (sum == biggest * biggest)
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";
	}
	return 0;
}