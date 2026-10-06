//example of relational operator
/*
relational operator/comparison operator
it is used to compare variables/values.
1.== used to check 2 variables has same value  or not.
2.!= use to check 2 variable has different value or not.
3.< used to check wheather left side variable is less than right side variable or not. 
4.> used to check wheather right side variable is greter than left side variable or not.
5.<= used to check wheather left side variable is less than or equal to right side variable or not.
6.>=used to check wheather right side variable is greter than or equal to left side variable or not.
*/
#include<stdio.h>
void main()
{
    int a,b;
    a=10;
    b=11;
    printf(" \n%d=%d==%d",a==b,a,b);
    printf(" \n%d=%d!=%d",a!=b,a,b);
    printf(" \n%d=%d<%d",a<b,a,b);
    printf(" \n %d=%d>%d",a>b,a,b);
    printf(" \n%d=%d<=%d",a<=b,a,b);
    printf("\n %d=%d>=%d",a>=b,a,b);
}