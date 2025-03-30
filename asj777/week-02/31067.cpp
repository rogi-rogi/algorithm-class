#include <bits/stdc++.h>
using namespace std;

// 25.03.24 다오의 경주 대회 

int N,K;
int track[100005];
int tmp[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> K;
    for(int i=0; i<N; i++) {
        cin >> track[i];
    }
    int base = track[0];
    int cnt = 0;
    for(int i=1; i<N; i++) {
        if(track[i]>base) continue;
        else {
            track[i]+=K; 
            cnt++;
        }
        base = max(base,track[i]); 
    }
    
    for(int i=0; i<N-1; i++) {
        if(track[i]>=track[i+1]) {
            cout << -1;
            return 0;
        }
    }
    
    cout << cnt;    
    return 0;
}
