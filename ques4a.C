#include <stdio.h>

int main()
{
    int a[] = {1, 5, 6, 5, 8, 48, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int b[n];
    int i;
    for (i = 0; i < n; i++)
    {
        b[n - 1 - i] = a[i];
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
