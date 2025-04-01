#include <bits/stdc++.h>
using namespace std;

// 25.04.02 1로 만들기 복습 (큐)
int N;
queue<pair<int,int>> q;
int cnt = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    q.push({N,cnt}); // 값 연산 횟수

    while(!q.empty()) {
        int num = q.front().first;
        int tmp = q.front().second;
        q.pop();

        if(num==1) {
            cout << tmp;
            break;
        }
        else {
            if(num%3==0) {
                q.push({num/3,tmp+1});
            }
            if(num%2==0) {
                q.push({num/2,tmp+1});
            }
            q.push({num-1,tmp+1});
        }
        
    }
    
    return 0;

}




