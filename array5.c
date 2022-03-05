#include <stdio.h>
int main()
{
    int array[100];
    int i, n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    printf("enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("the element of array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }

    return 0;
}