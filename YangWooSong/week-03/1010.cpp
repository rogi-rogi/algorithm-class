#include <iostream>
using namespace std;

void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

long long CombinationCount(int n1, int n2)
{
	int big = max(n1, n2);
	int small = min(n1, n2);

	long long result = 1;
	int tmp = 1;
	for (int i = big; i > big - small ; --i, tmp++)
	{
		result *= i;
		result /= tmp;
	}
	return result;
}

int main()
{
	Init();

	int t = 0;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int num1, num2;
		cin >> num1 >> num2;

		cout << CombinationCount(num1, num2) << "\n";
	}

	return 0;
}