#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Inform
{
	int first = 0;
	int second = 0;
};

bool Compare(Inform& a, Inform& b)
{
	if (a.second == b.second)
	{
		return	a.first < b.first;
	}
	else
		return	a.second < b.second;
}

void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
    init();
    
	vector<Inform> vList;

	int Count = 0;
	cin >> Count;

	for (int i = 0; i < Count; ++i)
	{
		Inform p;
		cin >> p.first >> p.second;
		vList.push_back(p);
	}

	sort(vList.begin(), vList.end(), Compare);

	for (int i = 0; i < Count; ++i)
	{
		cout << vList[i].first << " " << vList[i].second << "\n";
	}

	return 0;
}
