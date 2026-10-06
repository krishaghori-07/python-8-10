#include<stdio.h>
void main()
{
    int a,b,c,result;
    printf("enter value for a:");
    scanf("%d",&a);
    printf("enter value for b:");
    scanf("%d",&b);
    printf("enter value for c:");
    scanf("%d",&c);
    //10<20&&20>30
    result= a < b && b > c;
    printf("%d = %d < %d && %d > %d",result,a,b,b,c);
}