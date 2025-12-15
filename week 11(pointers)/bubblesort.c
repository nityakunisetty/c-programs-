#include <stdio.h>

int main()
{
    int a[10];
    int *p = a;

    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", (p + i));

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9 - i; j++)
        {
            if(*(p + j) > *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("Sorted elements:\n");
    for(int i = 0; i < 10; i++)
        printf("%d ", *(p + i));

    return 0;
}