
#include <stdio.h>
int main()
{
    int array[100];
    int i, smallest, n;
    printf("enter size of the array: ");
    scanf("%d", &n);
    printf("enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    smallest = array[0];
    for (i = 1; i < n; i++)
    {
        if (smallest > array[i])
            smallest = array[i];
    }
    printf("smallest element of array is: %d\n", smallest);

    return 0;
}