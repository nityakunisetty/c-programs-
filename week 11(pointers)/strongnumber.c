#include <stdio.h>

int fact(int x);
void strong(int *p);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int *p = &n;
    strong(p);

    return 0;
}

void strong(int *p)
{
    int num = *p;
    int m = num;
    int sum = 0;

    while(m != 0)
    {
        int r = m % 10;
        sum += fact(r);
        m /= 10;
    }

    if(sum == num)
        printf("Strong number");
    else
        printf("Not strong");
}

int fact(int x)
{
    if(x == 0)
        return 1;
    return x * fact(x - 1);
}