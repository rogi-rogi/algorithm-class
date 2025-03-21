#include <iostream>
#include <vector>
#include <algorithm>
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

	int K = 0;
	cin >> K;

	vector<int> vRopeWeight;

	for (int maxW, i = 0; i < K; ++i)
	{
		cin >> maxW;
		vRopeWeight.push_back(maxW);
	}

	sort(vRopeWeight.begin(), vRopeWeight.end(), greater<int>());

	int Result = 0;
	for (int i = 0; i < vRopeWeight.size(); ++i)
	{
		if (Result < (i + 1) * vRopeWeight[i])
			Result = (i + 1) * vRopeWeight[i];
	}

	cout << Result;

	return 0;
}