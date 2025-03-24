#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    int cnt=1;
    scanf("%s", str);
    getchar();
    int len = strlen(str);
    for(int i=1;i<len;i++){
        if((int)str[i]<= (int)str[i-1]) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
