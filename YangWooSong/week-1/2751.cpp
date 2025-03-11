#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Count = 0;
	cin >> Count;

	vector<int> vNum;

	for (int i = 0; i < Count; ++i)
	{
		int a = 0;
		cin >> a;
		vNum.push_back(a);
	}

	sort(vNum.begin(), vNum.end());

	for (int i = 0; i < Count; ++i)
	{
		cout << vNum[i] << "\n";
	}


	return 0;
}