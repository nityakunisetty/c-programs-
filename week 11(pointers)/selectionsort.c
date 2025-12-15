#include <stdio.h>

void selection(int *p, int n);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    int *p = a;

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", (p + i));

    selection(p, n);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}

void selection(int *p, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(*(p + j) < *(p + i))
            {
                int temp = *(p + j);
                *(p + j) = *(p + i);
                *(p + i) = temp;
            }
        }
    }
}