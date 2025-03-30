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

struct Inform
{
	int first = 0;
	int second = 0;
};

bool Compare(Inform& a, Inform& b)
{
	if (a.first == b.first)
	{
		return	a.second < b.second;
	}
	else
		return	a.first < b.first;
}

int main()
{
	Init();

	vector<Inform> inform_list;

	int count = 0;
	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		Inform p;
		cin >> p.first >> p.second;
		inform_list.push_back(p);
	}

	sort(inform_list.begin(), inform_list.end(), Compare);

	for (int i = 0; i < count; ++i)
	{
		cout << inform_list[i].first << " " << inform_list[i].second << "\n";
	}

	return 0;
}