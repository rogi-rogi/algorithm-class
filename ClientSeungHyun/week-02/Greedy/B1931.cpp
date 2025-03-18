#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 실패

void Init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool SortSecond(pair<int, int> A, pair<int, int> B)
{
    if (A.second == B.second)
        return A.first < B.first;

    return A.second < B.second;
}

int main()
{
    Init();

    int N{};
    cin >> N;

    vector<pair<int, int>> Times;
    Times.reserve(N);

    for (int i = 0; i < N; ++i)
    {
        int Start{}, End{};
        cin >> Start >> End;

        Times.push_back({ Start, End });
    }

    sort(Times.begin(), Times.end(), SortSecond);

    int Cnt{ 1 };
    int Time = Times[0].second;
    for (int i = 1; i < N; ++i)
    {
        if (Time <= Times[i].first)
        {
            Time = Times[i].second;
            ++Cnt;
        }
    }

    cout << Cnt;

    return 0;
}