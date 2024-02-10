#include <stdio.h>

int main() {
    int rows = 4; // تعداد ردیف‌ها

    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}