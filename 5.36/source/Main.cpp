#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod);


int main() {
    int n = 4;  
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("將圓盤 1 從 %c 移到 %c\n", from_rod, to_rod);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("將圓盤 %d 從 %c 移到 %c\n", n, from_rod, to_rod);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}
