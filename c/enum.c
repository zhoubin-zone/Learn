#include<stdio.h>
int main(){
    enum Day{
        mon ,tue ,wed ,thu ,fri ,sat ,sun
    } day;
    // for(day=mon;day<sun;day++){
    //     printf("%d",day);
    // }
    printf("please input :");
    scanf("%d",&day);
    printf("%d\n",day);
    switch(day){
        case mon:
            printf("mon");
        break;
        case tue:
            printf("tue");
        break;
        case wed:
            printf("wed");
        break;
        case thu:
            printf("thu");
        break;
        case fri:
            printf("fri");
        break;
        case sat:
            printf("sat");
        break;
        case sun:
            printf("sun");
        break;

    }
    
}