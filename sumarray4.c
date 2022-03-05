#include <stdio.h>
int main()
{
    int array1[100], array2[100];
    int i, avg = 0, n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    printf("enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &array1[i], &array2[i]);
    }
    for (i = 0; i < n; i++)
    {
        avg += array[i];
        printf("avg of the element of array is: %d\n", avg);

        return 0;
    }