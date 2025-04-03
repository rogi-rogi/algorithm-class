#include <iostream>
#include <vector>
#include <stack>
#include <set>

using namespace std;

string str;
vector<int> isSelected; // 전체 문자열에서 쓰인 인덱스, set_index에서 쓰인 인덱스
vector<int> isVisited(10, false); // set_index에서 쓰인 인덱스
vector<pair<int, int>> set_index; // () 괄호 쌍의 인덱스 저장
set<string> answer;

void Init()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void Input() { //괄호 쌍 인덱스 저장
    cin >> str;
    isSelected.assign(str.length(), false);

    stack<int> tmp;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            tmp.push(i);
        }
        else if (str[i] == ')') {
            int idx = tmp.top();
            tmp.pop();
            set_index.push_back(make_pair(idx, i));
        }
    }
}

void DFS(int idx, int cnt) {
    if (cnt >= 1) { // 선택(제거)된 괄호의 쌍이 1개 이상이라면
        string s = "";
        for (int i = 0; i < str.length(); i++) {
            if (isSelected[i])   
                continue;
            s += str[i];
        }
        if (answer.count(s) == 0) {
            answer.insert(s);
        }
    }

    for (int i = idx; i < set_index.size(); i++) {
        if (isVisited[i])    
            continue;
        isVisited[i] = true;
        isSelected[set_index[i].first] = true;
        isSelected[set_index[i].second] = true;

        DFS(i + 1, cnt + 1);

        isVisited[i] = false;
        isSelected[set_index[i].first] = false;
        isSelected[set_index[i].second] = false;
    }
}

int main() {
    Init();

    Input();
    DFS(0, 0);

    for (auto iter = answer.begin(); iter != answer.end(); iter++) {
        cout << *iter << '\n';
    }

    return 0;
}