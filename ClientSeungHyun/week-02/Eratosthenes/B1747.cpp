#include <iostream>
#include<string>


using namespace std;

void Init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

#define MAX_NUM 1003002
bool Array[MAX_NUM] = { };

int main()
{
    Init();

    int N{};
    cin >> N;

    Array[0] = Array[1] = true;
    for (int i = 2; i < MAX_NUM; ++i)
    {
        if (!Array[i])
        {
            for (int j = 2; j * i < MAX_NUM; ++j)
            {
                Array[i * j] = true;
            }
        }
    }

    for (int i = N; i < MAX_NUM; ++i)
    {
        bool bResult = true;

        if (!Array[i])
        {
            string str = to_string(i);

            for (int j = 0; j < str.length() / 2; ++j)
            {
                if (str[j] != str[str.length() - j - 1])
                {
                    bResult = false;
                }
            }

            if (bResult)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}