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

bool Compare(pair<string, string> set1, pair<string, string> set2)
{
	if (set1.first == set2.first)
	{
		return set1.second > set2.second;
	}
	else
	{
		return set1.first < set2.first;
	}
}

int main()
{
	Init();

	int n = 0;
	cin >> n;

	vector<pair<string, string>> v_List;
	for (int i = 0; i < n; ++i)
	{
		string mento, mentee;
		cin >> mento >> mentee;
		v_List.push_back(make_pair(mento, mentee));
	}

	sort(v_List.begin(), v_List.end(), Compare);

	for (auto& iter : v_List)
	{
		cout << iter.first << " " << iter.second << "\n";
	}

	return 0;
}