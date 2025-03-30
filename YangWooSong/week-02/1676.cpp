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
	int n = 0;
	int count = 0;
	cin >> n;

	for (int i = 5; i <= n; i *= 5)
	{
		count += n / i;
	}

	cout << count;

	return 0;
}