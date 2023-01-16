#include <stdio.h>

int main() {

    int inputs, j, input[inputs];
    int count, error;

    scanf("%d", &inputs);

    for (j = 0; j < inputs; j++) {
        scanf("%d", &input[j]);
        count++;
        if (count > 1) {
            if ( input[j-1] > 0 && input[j] < 0) {
                error++;
            }
        }
    }

    if ( error > 0) {
        printf("%d\n", error);
    }



}
