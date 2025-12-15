#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    float *p;
    p = (float *)malloc(sizeof(float) * n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%f", (p + i));

    printf("Elements are:\n");
    for(int i = 0; i < n; i++)
        printf("%.2f ", *(p + i));

    free(p);
    return 0;
}