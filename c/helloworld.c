#include<stdio.h>
#include<float.h>
#define zhoubin 
void fun();
static int n = 10;//全局变量
int main(){
    
    while(n--){
        fun();
    }
    return 0;
}
void fun(){
    static int count = 0;//不会重置
    count++;
    printf("n=%d count=%d \n",n,count); 
}