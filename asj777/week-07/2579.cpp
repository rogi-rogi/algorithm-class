#include <bits/stdc++.h>
using namespace std;
// 25.05.07 계단 오르기 (다이나믹 프로그래밍 복습)
int N;
int arr[305];
int dp[305];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=1; i<=N; i++) {
        cin >> arr[i];
    }
    dp[0] = 0; // 시작 계단
    dp[1] = arr[1]; // 첫번째
    dp[2] = arr[1]+arr[2]; // 두번째
    dp[3] = max(arr[1]+arr[3],arr[2]+arr[3]); // (1+2) 또는 (1+3)

    for(int i=4; i<=N; i++) {
        dp[i] = max(dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i]); // 2칸 올라오기 또는 연속으로 올라오는 경우
    }

    cout << dp[N];

    return 0;
}
