#include<stdio.h>
int main() {
    int n, a =0, b =1, c;

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1; i<n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%dth Fibonacci term = %d", n,a);

    return 0;
}