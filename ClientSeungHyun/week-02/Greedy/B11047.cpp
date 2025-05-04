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

    int N{}, K{};
    cin >> N >> K;

    vector<int> Coins;
    Coins.reserve(N);
    for (int i = 0; i < N; ++i)
    {
        int Coin{};
        cin >> Coin;

        Coins.emplace_back(Coin);
    }

    sort(Coins.begin(), Coins.end(), greater<>());

    int Cnt{};
    for (int i = 0; i < K || K > 0; ++i)
    {
        if (K / Coins[i] > 0)
        {
            Cnt += K / Coins[i];
            K %= Coins[i];
        }
    }


    //옹 이것도 되네
    //int Index{}, Cnt{};
    //while (K)
    //{
    //    if (K / Coins[Index] > 0)
    //    {
    //        ++Cnt;
    //        K -= Coins[Index];
    //    }
    //    else
    //    {
    //        ++Index;
    //    }
    //}

    cout << Cnt;

    return 0;
}