#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int row, coef = 1;
    printf("Row(s) : ");
    scanf_s("%d", &row);
    for (int i = 0; i < row; i++) {
        for (int space = 1; space <= row - i; space++) printf("  ");
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) coef = 1;
            else coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}