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

	int num = 0;

	cin >> num;

	for (int i = 1; i < num; ++i)
	{
		int sum = 0, tmp = i;

		while (tmp > 0)
		{
			sum += tmp % 10;
			tmp = tmp / 10;
		}
		sum += i;
		if (sum == num)
		{
			cout << i << "\n";
			return 0;
		}
	}

	cout << 0 << "\n";

	return 0;
}