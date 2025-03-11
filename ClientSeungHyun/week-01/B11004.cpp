#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> Nums;

	int iK, iN;

	cin >> iN >> iK;
	
	for (int i = 0; i < iN; ++i)
	{
		int iInput;
		cin >> iInput;
		Nums.emplace_back(iInput);
	}

	sort(Nums.begin(), Nums.end());

	cout << Nums[iK - 1];

	return 0;
}