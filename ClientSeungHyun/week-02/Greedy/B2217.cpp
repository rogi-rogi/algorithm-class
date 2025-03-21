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

    int N{};
    cin >> N;

    vector<int> Ropes;
    Ropes.reserve(N);
    
    for (int i = 0; i < N; ++i)
    {
        int Rope{};
        cin >> Rope;

        Ropes.emplace_back(Rope);
    }

    sort(Ropes.begin(), Ropes.end(), greater<>());

    int Max{};
    for (int i = 0; i < N; ++i)
    {
        Max = std::max(Max, Ropes[i] * (i + 1));
    }

    cout << Max;

    return 0;
}