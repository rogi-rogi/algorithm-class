#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, p,cnt=0;
    scanf("%d %d", &n, &k);

    int arr[n+1];
    arr[0] = 0;
    arr[1] = 0;
    for(int i=2;i<n+1;i++){
        arr[i] = 1;
    }

    for(int i=0;i<=n;i++) {
        if(arr[i] == 1) {
            for(int j=i;j<=n;j+=i){
                if(arr[j] == 1){
                    arr[j] = 0;
                    cnt++;
                    if(cnt == k) {
                        printf("%d", j);
                        return 0;
                    }
                }
            }
        }
    }
    
    return 0;
}
