#include <string.h>
#include <stdio.h>

int main() {
    
    char string[100];
    int i, count, length;
    scanf("%s", string);
    int flag = 0;
    length = strlen(string);

    for(i=0;i < length ;i++){
        if (string[i] == 'Z' && string[i+1] == 'Z'){
            flag = 1;
            break;
        }
        else {
            count++;
        }
   }

    if (flag == 1) {
        printf("%d\n", count);
    }
    else {
        printf("NO ZZ\n");
    }
}
