#include <iostream>
#include <vector>
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

	int n = 0;
	int k = 0;
	int count = 0;

	vector<int> v_track;

	cin >> n >> k;

	for (int num, i = 0; i < n; ++i)
	{
		cin >> num;
		v_track.push_back(num);
	}

	for (int i = 1; i < n; ++i)
	{
		if (v_track[i] <= v_track[i - 1])
		{
			if (v_track[i] + k > v_track[i - 1])
			{
				v_track[i] += k;
				++count;
			}
			else
			{
				count = -1;
				break;
			}
		}
	}

	cout << count;

	return 0;
}