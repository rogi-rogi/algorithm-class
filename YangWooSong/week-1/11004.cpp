#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main()
{
	init();

	int Count = 0;
	int index = 0;
	cin >> Count >> index;

	vector<int> vInput;

	for (int a, i = 0; i < Count; ++i)
	{
		cin >> a;
		vInput.push_back(a);
	}

	sort(vInput.begin(), vInput.end());

	cout << vInput[index-1];

	return 0;
}
