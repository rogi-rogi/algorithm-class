#include <iostream>
#include <vector>
using namespace std;

int sieve_of_eratosthenes(int n, int k) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            count++;
            if (count == k)
                return i;

            for (int j = i * i; j <= n; j += i)
            {
                if (is_prime[j])
                {
                    count++;
                    is_prime[j] = false;

                    if (count == k)
                        return j;
                }
            }
        }
    }
    return 0;
}

int main() {
    int n = 0, k = 0;
    cin >> n >> k;

    int answer = sieve_of_eratosthenes(n, k);

    cout << answer;

    return 0;
}
