#include<stdio.h>
#include<string.h>
int main(){
    char hello[6] ={'h','e','l','l','o','\0'};
    printf("%s\n",hello);

    char str1[12]="hello";
    char str2[12]="world";
    char str3[12];
    int len;

    strcpy(str3,str1);
    printf("%s\n",str3);

    strcat(str1,str2);
    printf("%s\n",str1);

    len=strlen(str1);
    printf("%d\n",len);
return 0;
}