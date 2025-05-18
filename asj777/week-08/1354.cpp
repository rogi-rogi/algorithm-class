#include <bits/stdc++.h>
using namespace std;
// 25.05.18 무한 수열2 (다이나믹 프로그래밍)

long long N, P, Q, X, Y;
map<long long, long long> dp; // dp베열을 map으로 접근

long long solve(long long n) {
    if (n <= 0) return 1; // dp[0] = 1
    if (dp.count(n)) return dp[n]; // count함수는 map에 존재하는 지 확인
    return dp[n] = solve(n / P - X) + solve(n / Q - Y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> P >> Q >> X >> Y;
    cout << solve(N);

    return 0;
}
