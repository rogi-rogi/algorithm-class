#include <bits/stdc++.h>
using namespace std;

// 25.04.08 문자열 폭발 (스택)
string str;
string bomb;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> str;
    cin >> bomb;
    stack<char> stk;

    for(char ch: str) {
        stk.push(ch);
        
        if(stk.size()>=bomb.length()) {
            string tmp = "";
            
            for(int i=0; i<bomb.length(); i++) {
                tmp = stk.top() + tmp;
                stk.pop();
            }

            if(tmp!=bomb) {
                for(char c:tmp) {
                    stk.push(c);
                }
            }
        }
    }
    
    if(stk.empty()) cout << "FRULA";
    else {
        string ans = "";
        while(!stk.empty()) {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        cout << ans;
    }

    return 0;
}




