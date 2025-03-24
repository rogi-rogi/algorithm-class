#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, w=0;  

    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for(int i=0;i<n;i++){
        if(w<arr[i]*(n-i)) w = arr[i]*(n-i);
    }

    printf("%d", w);
    return 0;
}
