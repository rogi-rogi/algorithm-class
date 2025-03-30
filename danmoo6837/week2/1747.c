#include <stdio.h>
#include <math.h>
#include <string.h>

int is_prime(int num) {
    if(num<2) return 0;
    if(num == 2) return 1;
    if(num%2 == 0) return 0;

    for(int i=3;i<= sqrt(num); i+=2) {
        if( num%i==0) return 0;
    }

    return 1;
}

int is_palindrome(int num) {
    char str[10];
    sprintf(str, "%d", num);
    int len = strlen(str);
    for(int i=0;i<len/2;i++) {
        if(str[i] != str[len-i-1]) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    while(1) {
        if(is_prime(n) && is_palindrome(n)) {
            printf("%d\n", n);
            return 0;
        }
        n++;
    }


    return 0;
}
