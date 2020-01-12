#include <stdio.h>
int main()
{
    int i = 5, j;

    j = i++;
    printf("i=%d,j=%d\n", i, j);
    i = ++j;

    printf("\ni=%d,j=%d\n", i, j);
}
