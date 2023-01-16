#include <stdio.h>

int main() {

    int row, column, i, j, count;
    scanf("%d %d", &row, &column);
    int count1 = row * column;
    int first[100][100], second[100][100];

    //First matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    //Second matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            if (first[i][j] > second[i][j]) {
                count++;
                break;
                if (second[i][j] > first[i][j]) {
                    count = 0;
                    break;
                }
            }
        }
    }

    if (count == count1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


}
