#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int start;
    int end;
} meet;

int compare(const void *a, const void *b) {
    meet *m1 = (meet*) a;
    meet *m2 = (meet*) b;

    if(m1->end != m2->end) return m1->end - m2->end;

    return m1->start - m2->start;
}

int main() {
    int n, cnt=0, start_point=0;
    scanf("%d", &n);
    meet arr[n];

    for(int i=0;i<n;i++){
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }

    qsort(arr, n, sizeof(meet), compare);

    for(int i=0;i<n;i++){
        if(start_point <=arr[i].start) {
            cnt++;
            start_point = arr[i].end;
        }
    }
    printf("%d", cnt);
    return 0;
}
