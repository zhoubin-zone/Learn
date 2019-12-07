#include<stdio.h>
#include<stdlib.h>
int max(int x,int y){
      return x>y?x:y;
  }
  void populate_arran(int*array,size_t arraySize,int (*getNextValue)(void)){
      for (size_t i=0;i<arraySize;i++){
          array[i]=getNextValue();
      }
  }
  int getNextValue(){
      return rand();
  }
int main(){
  
    // int(*p)(int ,int)=&max;
    // int a,b,c,d;
    // scanf("%d %d %d",&a,&b,&c);
    // d=p(p(a,b),c);
    // printf("%d",d);


    int myArray[10];
    populate_arran(myArray,10,getNextValue);
    for (int i=0;i<10;i++){
        printf("%d\n",myArray[i]);
    }

    return 0;
}