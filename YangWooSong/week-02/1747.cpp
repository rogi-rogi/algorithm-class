#include <iostream>
#include <string>
using namespace std;

void Init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool TestPrime(int n)   //소수 판별
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (i != 2 && i % 2 == 0)
            continue;

        if (i != 3 && i % 3 == 0)
            continue;

        if (n % i == 0)
            return false;
    }

    return true;
}

bool TestPalin(int n)
{
    string sTmp = to_string(n);
    for (int i = 0; i < sTmp.length() / 2; ++i)
    {
        if (sTmp[i] != sTmp[sTmp.length() - 1 - i])
            return false;
    }
    return true;
}

int find_Smallest_prime_pal(int n) 
{
    while (1)
    {
        if (TestPrime(n) && TestPalin(n))
            return n;
        n++;
    }
}

int main() {

    Init();

    int n;
    cin >> n;

    int answer = find_Smallest_prime_pal(n);

    cout << answer;

    return 0;
}
