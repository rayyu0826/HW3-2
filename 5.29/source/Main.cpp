#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int num1, num2;

    printf("�п�J��ӼƦr�G");
    scanf_s("%d %d", &num1, &num2);

    printf("%d �M %d ���̤p�����ƬO�G%d\n", num1, num2, lcm(num1, num2));

    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}