#include <iostream>
using namespace std;

void Init() {
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

int main() {
	Init();

	int gcd, lcm;
	cin >> gcd >> lcm;

	int target = lcm / gcd;  // a * b = gcd * lcm ¿Ãπ«∑Œ a' * b' = lcm / gcd
	int a = 1, b = target;

	for (int i = 1; i * i <= target; ++i) {
		if (target % i == 0) 
		{ 
			int x = i;
			int y = target / i;
			if (GCD(x, y) == 1) 
			{  
				a = x, b = y;
			}
		}
	}

	cout << a * gcd << " " << b * gcd;
	return 0;
}