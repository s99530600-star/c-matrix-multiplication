#include <stdio.h>

int main() {
    int n = 5;
    int matrix[5][5];
    int result[25];
    int i, j, k, s;
    
    // 讀入 5x5 方陣
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 1. 第一行印出學號
    printf("215418020\n");

    // 起始位置：正中央 (2, 2)，數值為 13
    int r = n / 2;
    int c = n / 2;
    
    // 逆時針方向（符合題目範例 13 14 9 8 7）：右 -> 上 -> 左 -> 下
    int dr[4] = {0, -1, 0, 1};
    int dc[4] = {1, 0, -1, 0};
    int dir = 0;

    int count = 0;
    result[count++] = matrix[r][c];
    int step = 1;

    while (count < n * n) {
        for (k = 0; k < 2; k++) {
            for (s = 0; s < step; s++) {
                if (count == n * n) break;
                r += dr[dir];
                c += dc[dir];
                result[count++] = matrix[r][c];
            }
            dir = (dir + 1) % 4;
        }
        step++;
    }

    // 2 & 3. 每行印出 n 個元素，並使用 %3d 對齊
    for (i = 0; i < count; i++) {
        printf("%3d", result[i]);
        if ((i + 1) % n == 0) {
            printf("\n");
        }
    }

    return 0;
}
