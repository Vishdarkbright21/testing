#include <stdio.h>
int main()
{
    int array[100];
    int i, largest, n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    printf("enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    largest = array[0];
    for (i = 1; i < n; i++)
    {

        if (largest < array[i])
            largest = array[i];
    }
    printf("largest element of array is: %d\n", largest);
    return 0;
}