#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 7) {
            printf("Loop stopped at i = %d\n", i);
            break;   // Exit loop when i == 7
        }
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}

