#include <iostream>
#include<cstring>

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

    int* Arr = new int[N + 1];
    memset(Arr, 0, sizeof(int) * (N + 1));

    int Cnt{ 0 };
    for (int i = 2; i <= N; ++i)
    {
        for (int j = 1; j * i <= N; ++j)
        {
            if (!Arr[i * j])
            {
                Arr[i * j] = true;
                ++Cnt;

                if (Cnt == K)
                {
                    cout << j * i;
                }
            }
        }
    }

    return 0;
}