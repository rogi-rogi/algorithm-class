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
	int iN{};
	int iInput{};
	cin >> iN;

	for (int i = 0; i < iN; ++i)
	{
		cin >> iInput;
		Nums.emplace_back(iInput);
	}

	sort(Nums.begin(), Nums.end());

	for (auto& N : Nums)
	{
		cout << N << "\n";
	}

	return 0;
}