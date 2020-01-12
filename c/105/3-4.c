#include <stdio.h>
#include <math.h>
void main()
{
    int i,j,k;
    float f,h;
    i = 22;
    j = 8;
    f = 1000.25;
    h = 830.78;

    printf("this is a arithmetic calculator\n");
    printf("i%%j=%d,j=%d\n",i,j);
    printf("i+j=%d\n",i+j);
    

    f=25.095;

    if(fabs(f==25.095)<0.0001)
    {
        printf("ok");
    }else{
        printf("no");
    }
}