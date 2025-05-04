#include <iostream>
#include<vector>
#include<algorithm>

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

    vector<int> Grades;
    Grades.reserve(N);
    for (int i = 0; i < N; ++i)
    {
        int Grade{};
        cin >> Grade;

        Grades.emplace_back(Grade);
    }

    int K{};
    cin >> K;

    int Middle = N / 2;
    while (Middle > 0)
    {
        int JumpSize = N / Middle;
        for (int i = 0; i < N - 1; i = i + JumpSize)
        {
            sort(Grades.begin() + i, Grades.begin() + i + JumpSize);
        }

        if (Middle == K) 
        {
            for (int i = 0; i < N; i++)
            {
                cout << Grades[i] << " ";
            }

            cout << '\n';
            break;
        }

        Middle /= 2;
    }

    return 0;
}