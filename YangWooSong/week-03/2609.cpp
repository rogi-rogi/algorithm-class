#include <iostream>
using namespace std;

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

int LCM(int num1, int num2, int gcd)
{
	return (num1 * num2 / gcd);
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int gcd = GCD(num1, num2);
	cout << gcd << "\n";
	cout << LCM(num1, num2, gcd);

	return 0;
}