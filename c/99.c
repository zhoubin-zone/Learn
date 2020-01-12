#include<stdio.h>
void time99(){
      int i =0;
    int j=0;
    for (i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            printf("%dx%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
}
void printAZ(){
    char c;
    for(c='A';c<'Z';c++){
        printf("%c ",c);
    }
}
int main(){
  int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            if((i+j)%2==0)
                printf("%c%c",219,219);
            else printf("  ");
        printf("\n");
    }
    return 0;
return 0;
}
