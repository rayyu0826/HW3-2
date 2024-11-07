#include <stdio.h>
#include <stdlib.h>
char change(char a);
char letter;
int main(){
	printf("Please enter an English letter:");
	scanf_s("%c", &letter);
	printf("%\tc\n", change(letter));
	system("pause");
	return 0;
}

char change(char a) {
	a += 0x20;
	return a;
}