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

	int n = 0;
	cin >> n;

	int count = 1;
	int total = 1;

	while (1)
	{
		if (n <= total)
			break;

		++count;
		total += count * 6 - 6;
	}

	cout << count;

	return 0;
}