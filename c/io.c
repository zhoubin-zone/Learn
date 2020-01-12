#include<stdio.h>

int main(){
    // printf("please input your name\n");
    // int c = getchar();
    // printf("\n");
    // putchar(65);
    // char str[50];
    // gets(str);
    // puts(str);

    // char str[100];
    // int i;
    // scanf("%s %d",str,&i);
    // printf("%s,%d",str,i);
    FILE *fp = NULL;
    // fp =fopen("d:/temp/test.csv","w+");
    fp =fopen("d:/temp/test.csv","r");
    // fprintf(fp,"this is testing for fprintf...\n");
    // fputs("this is testing for fputs...\n",fp);
    // fclose(fp);

    char buff[255];
    fscanf(fp,"%s",buff);
    printf("1:%s\n",buff);

    fgets(buff,255,fp);
    printf("2:%s\n",buff);

    fgets(buff,255,fp);
    printf("3:%s\n",buff);
    fclose(fp);
return 0;
}
