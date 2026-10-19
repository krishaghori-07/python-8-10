/*write a program to findout factorial of gievn number 
input:5
process:5*4*3*2*1
output:120

steps:
1.create variable number and factorial
2.accept number from user(assume 5)
3.factoiral(5)=number
4.number(4)=number-1
5.factorial(20)=factorial *number
6.number(3)=number-1
7.factorial(60)=factorial*number
8.number(2)=number-1
9.factorial=factorial*number
10.number(1)=number-1
11.factorial=factorial*number
*/
#include<stdio.h>
void main()
{
    int number,factorial;
    printf("\n enter number:");
    scanf("%d",&number);
    factorial=number;
    while(number>1)
    {
        number=number-1;
        factorial=factorial*number;
    }
    printf("%d",factorial);
}