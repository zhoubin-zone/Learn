#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
extern int errno;
int main()
{
    // FILE *pf;
    // int errnum;
    // pf=fopen("unexist.txt","rb");
    // if(pf==NULL){
    //     errnum=errno;
    //     fprintf(stderr,"errornum:%d\n",errno);
    //     printf("++++++++++++++++++++++++++++++++++++++\n");
    //     perror("through perror output error");
    //     printf("++++++++++++++++++++++++++++++++++++++\n");
    //     fprintf(stderr,"open file error :%s\n",strerror(errnum));
    // }

    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0)
    {
        fprintf(stderr, "0000000\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, " %d\n", quotient);

    exit(0);
    return 0;
}
