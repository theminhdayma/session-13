#include <stdio.h>
#include <string.h>
int main() {
    char numbers[100];
    int i, j, cout, len;
    int count[100] = {0};
    printf("Nhap vao mot chuoi: ");
    scanf("%s",&numbers);
    len = strlen(numbers);
    for (i = 0; i < len; i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        cout = 1;
        for (j = i + 1; j < len; j++) {
            if (numbers[i] == numbers[j]) {
                cout++;
                count[j] = 1;
            }
        }
        if (count[i] == 0) {
            printf("%c: %d\n", numbers[i], cout);
        }
    }
    return 0;
}
