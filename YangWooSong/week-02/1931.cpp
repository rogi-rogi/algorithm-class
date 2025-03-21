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

bool CompareEndTime(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.second == p2.second)
		return p1.first < p2.first;
	return p1.second < p2.second;
}

int main()
{
	Init();

	vector<pair<int, int>> vMeetingList;
	int c = 0;
	int count = 1;
	int endTime = 0;
	cin >> c;

	for (int n1,n2,i = 0; i < c; ++i)
	{
		cin >> n1 >> n2;
		vMeetingList.push_back({ n1,n2 });
	}

	sort(vMeetingList.begin(), vMeetingList.end(), CompareEndTime);

	endTime = vMeetingList[0].second;
	for (int i = 1; i < vMeetingList.size(); ++i)
	{
		if(vMeetingList[i].first >= endTime)
		{
			++count;
			endTime = vMeetingList[i].second;
		}
	}

	cout << count;

	return 0;
}