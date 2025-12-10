#include <stdio.h>

int main() {
    int n, a[20], i;
    float sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%.2f", sum / n);

    return 0;
}

