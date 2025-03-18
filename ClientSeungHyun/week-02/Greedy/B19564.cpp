#include <iostream>
#include <string>

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
    
    string str;
    cin >> str;

    int cnt = 1;
    for (int i = 1; i < str.length(); ++i)
    {
        if (str[i] <= str[i - 1])
        {
            ++cnt;
        }
    }

    cout << cnt;

    return 0;
}