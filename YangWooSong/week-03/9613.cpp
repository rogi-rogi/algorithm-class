#include <iostream>
#include <vector>
using namespace std;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int GCD(int num1, int num2)
{
	int small, big, mod;
	big = max(num1, num2);
	small = min(num1, num2);
	mod = big % small;

	int gcd = 0;

	if (mod == 0)
		gcd = small;
	else
	{
		gcd = GCD(small, mod);
	}

	return gcd;
}

int main()
{
	Init();

	int t = 0;
	cin >> t;

	while (t > 0)
	{
		int n = 0;
		cin >> n;

		vector<int> input_vector(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> input_vector[i];
		}

		long long sum = 0;
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				sum += (long long)GCD(input_vector[i], input_vector[j]);
			}
		}
		cout << sum << "\n";

		--t;
	}

	return 0;
}