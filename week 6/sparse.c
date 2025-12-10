#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, count = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] == 0)
                count++;

    if (count > (r * c) / 2)
        printf("Sparse Matrix");
    else
        printf("Not a Sparse Matrix");

    return 0;
}

