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

	string s;
	cin >> s;

	int k = 1;
	for (int i = 1; i < s.length(); ++i)
	{
		if ((int)s[i] <= (int)s[i - 1])
		{
			k++;
		}
	}

	cout << k;
	return 0;
}