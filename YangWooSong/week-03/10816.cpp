#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> origin_vector;

void Init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	Init();

	int n = 0;
	cin >> n;

	vector<int> test_vector;

	for (int a, i = 0; i < n; ++i)
	{
		cin >> a;
		origin_vector.push_back(a);
	}

	sort(origin_vector.begin(), origin_vector.end());

	int m = 0;
	cin >> m;
	for (int a, i = 0; i < m; ++i)
	{
		cin >> a;
		test_vector.push_back(a);
	}

	for (int i = 0; i < m; ++i)
	{
		cout << upper_bound(origin_vector.begin(), origin_vector.end(), test_vector[i]) - lower_bound(origin_vector.begin(), origin_vector.end(), test_vector[i]) << " ";
	}

	return 0;
}