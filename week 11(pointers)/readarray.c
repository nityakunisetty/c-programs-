#include <stdio.h>

int main()
{
    int a[5];
    int *p = a;

    printf("Enter 5 values:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", (p + i));

    printf("Values are:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    return 0;
}