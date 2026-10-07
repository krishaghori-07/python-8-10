#include<stdio.h>
void main()
{
    int a=10;
    int b=0;

    b=a++;//postfix
    printf("a=%d b=%d",a,b);
     b=a--;
    printf("\na=%d b=%d",a,b);
     b=++a;
    printf("\na=%d b=%d",a,b);
    b=--a;
    printf("\na=%d b=%d",a,b);
    
}