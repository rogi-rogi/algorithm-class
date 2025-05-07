#include <bits/stdc++.h>
using namespace std;

// 25.04.02 쇠막대기 복습(스택)
string str;
int cnt = 0;
stack<char> stk;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(') {
            stk.push(str[i]);
        }
        else {
            if(str[i-1] == '(') {
                stk.pop();
                cnt += stk.size();
            }
            else {
                cnt +=1;
                stk.pop();
            }
        }
    }
    cout << cnt;

    return 0;

}

