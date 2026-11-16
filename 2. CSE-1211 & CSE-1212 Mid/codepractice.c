#include <stdio.h>
int main() {
    int n = 10;
    for (int i = 0; i <= n; i++) {
        printf("%d ", i);
        if (i % 3 == 0) {
            printf("\n");
        }
        if (i % 4 == 1) {
            continue;
        }
    }
    return 0;
}
