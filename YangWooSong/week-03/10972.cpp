#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> input_vector;

void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	Init();

	cin >> n;
	for (int num, i = 0; i < n; ++i)
	{
		cin >> num;
		input_vector.push_back(num);
	}

	if (next_permutation(input_vector.begin(), input_vector.end()))
	{
		for (int i = 0; i < input_vector.size(); ++i)
		{
			cout << input_vector[i] << " ";
		}
	}
	else
		cout << "-1";


	return 0;
}