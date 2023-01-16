#include <stdio.h>

int main() {

    char string[100][20];
    int i, n;
    int count;

    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
		scanf("%s",string[i]);
	}

    for ( i = 0; i < n-1; i++) {
        if ( strcmp(string[i], string[i+1]) == 0) {
            count++;
            break;
        }
	}

    if (count > 0) {
        printf("Repeated\n");
    }
    else {
        printf("NO Repetition\n");
    }


}
