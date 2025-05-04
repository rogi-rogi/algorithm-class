#include <iostream>
#include <cmath>

using namespace std;

void Init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

double HalfFactorial(int n) {
    double result = 1;
    int divide_count = 0;
    for (int i = n; i > n/2; --i) {
        result *= i;
        if (divide_count <  n / 2)
        {
            result /= 2.0f;
            divide_count++;
        }
    }

    return result;
}

long long CountPairings(int n) {
    if (n % 2 == 0) {
        return HalfFactorial(n);
    }
    else {
        return HalfFactorial(n-1) * n;
    }
}
int main() {
    Init();
    int n;
    cin >> n;

    cout << CountPairings(n) << "\n";
    return 0;
}