#include <stdio.h>
#include <stdio.h>

void main()
{
    unsigned long input_IP;
    unsigned int BeginByte,MidByte,ThirdByte,EndByte;
    unsigned int_rotate=0x07;


    printf("*************************\n");
    printf("please enter the ip address(hex) you want parse:\n");

    scanf("%lx",&input_IP);
    BeginByte = (input_IP>> 24) & ~(~0 << 8);
    MidByte = (input_IP >> 16) & ~(~0 << 8);
    ThirdByte = (input_IP >> 8)& ~(~0 << 8);
    EndByte =  input_IP & ~(~0 << 8);

    printf("***********************\n");

    printf("thi ip address agter parsed is : %d.%d.%d.%d \n",BeginByte,MidByte,ThirdByte,EndByte);


}