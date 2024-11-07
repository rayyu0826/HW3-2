#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main() {
    unsigned int n;
    printf("輸入至第幾項費氏數列:");
    scanf_s("%d", &n);
    printf("\n");
    fibonacci(n);
    return 0;
}

unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, next;
    if (n == 1) printf("%llu", a);
    if (n == 2) printf("%llu,%llu", a, b);
    if (n > 2) printf("%llu,%llu,", a, b);
    for (unsigned int i = 0; i <= n-3; ++i) {
        next = a + b;
        a = b;
        b = next;
        printf("%llu,", b);
    }
    return b;
}