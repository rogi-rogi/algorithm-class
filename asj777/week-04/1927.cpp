#include <bits/stdc++.h>
using namespace std;

// 25.04.02 최소 힙 복습 (우선순위 큐)
int N;
priority_queue<int,vector<int>,greater<int>> pq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    while(N--) {
        int x;
        cin >> x;

        if(x!=0) {
            pq.push(x);
        }
        else {
            if(pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << '\n';
                pq.pop(); 
            }
        }
    }
    
    return 0;

}




