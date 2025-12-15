#include <stdio.h>

void sort(int *p, int n);
int binary(int *p, int n, int key);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    int *p = a;

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", (p + i));

    sort(p, n);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = binary(p, n, key);

    if(index == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", index);

    return 0;
}

void sort(int *p, int n)
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

int binary(int *p, int n, int key)
{
    int l = 0, h = n - 1;

    while(l <= h)
    {
        int mid = (l + h) / 2;

        if(key == *(p + mid))
            return mid;
        else if(key < *(p + mid))
            h = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}