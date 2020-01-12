#include<stdio.h>
#define message(a,b) \
printf(#a " and " #b "is sb \n")
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define coat(n) printf("res:"#n"=%d",count##3)
int main(){
    printf("%s\n",__DATE__);
    // message("zhou","juan");
    int count3=10;
    coat(3);
return 0;
}
