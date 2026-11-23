#include <stdio.h>

int main() {
    // 宣告矩陣與迴圈變數
    int A[2][4];
    int B[4][5];
    int C[2][5] = {0};
    int i, j, k;

    // 1. 輸入矩陣 A (2x4)
    printf("請輸入矩陣 A (2x4) 的元素：\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 2. 輸入矩陣 B (4x5)
    printf("請輸入矩陣 B (4x5) 的元素：\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 3. 計算矩陣相乘 C = A * B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 4. 依照指定格式印出矩陣 C
    printf("\n矩陣相乘結果 C：\n");
    for (i = 0; i < 2; i++) {
        printf("row%d ->. ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d", C[i][j]);
            if (j < 4) {
                printf(", ");
            }
        }
        printf("\n");
    }

    return 0;
}
