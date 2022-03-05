#include <stdio.h>
int main()
{
    int i, value[6] = {5, 10, 15, 20, 25, 30};
    for (i = 0; i < 6; i++)
    {
        printf("position :[%d], value:%d\n", i, value[i]);
    }
    return 0;
}