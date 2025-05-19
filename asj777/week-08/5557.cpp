#include <bits/stdc++.h>
using namespace std;
// 25.05.19 1학년 (다이나믹 프로그래밍)
int N;
int arr[105];
long long dp[105][21]; // i번째 까지 고려해서 j가 되는 경우의 수 


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }        
    
    dp[0][arr[0]] = 1; // 첫번째 수의 경우는 1개로 고정
    
    for(int i=1; i<N-1; i++) { // 마지막 고려
        for(int j=0; j<=20; j++) {
            if(dp[i-1][j]) {
                int plus = j+arr[i];
                int minus = j-arr[i];

                if(plus<=20) dp[i][plus] += dp[i-1][j];
                if(minus>=0) dp[i][minus] += dp[i-1][j];
            }
        }
    }
    
    cout << dp[N-2][arr[N-1]]; // 마지막 N-1을 수를 만들기 위해서 N-2까지 계산함
    
    return 0;
}
