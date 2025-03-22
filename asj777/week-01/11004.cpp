#include <bits/stdc++.h>
using namespace std;

// 25.03.11 K번쨰 수 (정렬)
long long N,K;
long long arr[5000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> K;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    
    cout << arr[K-1];

    return 0;
}
