#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char name[100];
    char *des;
    strcpy(name,"this is why i love you");
    des = (char*)malloc(20*sizeof(char));
    strcpy(des,"hahaha\n");
    printf("%s",des);
    des=(char *) realloc(des,100*sizeof(char));
    strcat(des,"wowowo");
    printf("%s",des);
    free(des);
return 0;
}
