#include <stdio.h>

int main() {
    int n, a[20], i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n%d", sum);

    return 0;
}

