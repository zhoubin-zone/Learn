#include<stdio.h>
#include<string.h>

union Data {
    int i;
    float f;
    char str[20];
};
int main(){
    union Data data;
    printf("%d \n",sizeof(data));

    data.i=10;
    printf("%d\n",data.i);
    data.f=229.3;
    printf("%f\n",data.f);
    strcpy(data.str,"hello world");


    printf("%d,%f,%s \n",data.i,data.f,data.str);

return 0;
}
