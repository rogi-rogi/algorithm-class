#include <stdio.h>

int main() {
    int n, k, cnt=0;
    int arr[1000000];

    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=n-1;i>=0;i--){
        if(arr[i]<=k) {
            cnt += (int)(k/arr[i]);
            k %= arr[i];
        }
    }

    printf("%d", cnt);
    return 0;
}
