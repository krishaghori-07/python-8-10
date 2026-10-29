//arguments and returns a value
#include<stdio.h>
int multiply(int a,int b)
{
    return a * b;
}
void main()
{
    int result;
    result=multiply(5,6);
    printf("multiplication=%d",result);
}