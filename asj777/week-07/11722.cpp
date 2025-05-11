#include <bits/stdc++.h>
using namespace std;
// 25.05.07 가장 긴 감소하는 부분 수열 (다이나믹 프로그래밍)
int N;
int arr[1005];
int dp[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(arr[j]>arr[i]) {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int ans = *max_element(dp,dp+N);
    cout << ans;
    

    return 0;
}
