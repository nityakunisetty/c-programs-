#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a, b;
    printf("Enter values of a & b:\n");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("After swapping:\na = %d\nb = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}