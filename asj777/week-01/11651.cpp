#include <bits/stdc++.h>
using namespace std;

// 25.03.22 좌표 정렬하기 2 (정렬)
int N;
vector<vector<int>> v(0); 

bool my_sort(vector<int>& a,vector<int>& b) {
    if(a[1]==b[1]) return a[0] < b[0];
    return a[1]<b[1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end(),my_sort);

    for(auto idx: v) {
        cout << idx[0] << " " << idx[1] << "\n";
    }
    return 0;
}
