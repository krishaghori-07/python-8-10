//no arguments but return a value
#include<stdio.h>
int add()
{
    int a=10,b=30;
    return a+b;
}
void main()
{
    int result;
    result=add();
    printf("sum=%d",result);
}