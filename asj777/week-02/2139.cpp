#include <bits/stdc++.h>
using namespace std;

// 25.03.24 나는 너가 살아온 날을 알고 있다

int D, M, Y;
int daylist[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 윤년 판별 함수
bool is_year(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) return true;
            return false;
        }
        return true;
    }
    return false;
}


int solve(int d, int m, int y) {
    int calcul = 0;

    for (int i = 1; i < m; i++) {
        calcul += daylist[i];
    }

    calcul += d;

    if (is_year(y) && m > 2) {
        calcul += 1;
    }

    return calcul;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        cin >> D >> M >> Y;
        if (D == 0 && M == 0 && Y == 0) break;
        cout << solve(D, M, Y) << "\n";
    }
    return 0;
}
