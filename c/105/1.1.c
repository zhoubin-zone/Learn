#include <stdio.h>
#include <stdlib.h>
#define BUFFERSIZE 1024

int main()
{
    unsigned short a, b, sum;
    char buffer[BUFFERSIZE];

    printf("welcome to user our counter\n");

    while ((fgets(buffer, BUFFERSIZE, stdin) != NULL) && (buffer[0]) != '#')
    {
        if (sscanf(buffer, "%hd,%hd",&a,&b) != 2)
        {
            printf("the input is skipped;%s",buffer);
            continue;
        }
        sum=a+b;
        printf("the sum of %d and %d is %d\n",a,b,sum);
    }
    return 0;
}