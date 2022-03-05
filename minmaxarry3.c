#include <stdio.h>
int main()
{
    int array[100];
    int i, max, min, n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    printf("enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    min = max = array[0];
    for (i = 1; i < n; i++)
    {
        if (min > array[i])
            min = array[i];
        if (max < array[i])
            max = array[i];
    }
    printf("minimum element of array is: %d\n", min);
    printf("maximum element of array is: %d\n", max);
    return 0;
}