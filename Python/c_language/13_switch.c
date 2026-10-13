/*
write a program to do addition ,substraction , or multilication orr division on given two number based upon user choice.
steps
-----------------------------------------------------------------------
1.create variable num1,num2,choice
2.create variable float as result
3.accept input from user in num1 variable
4.accept input from user in num2 variable
5.accept user choice into choice variable
6.decide operation upon user choice
if choice==1 then 
    result=num1+num2
if choice == 2 then
    result = num1-num2
if choice == 3 then 
    result=num1*num2
if choice == 4 then
    result=num1/num2
    otherwise
    print invalid choice
7.display result.
*/
#include<stdio.h>
void main()
{
    int num1,num2,choice;
    float result;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("/npress 1 for addition");
    printf("/npress 2 for substraction");
    printf("/npress 3 for multiplication");
    printf("/npress 4 for divison");
    printf("enter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            result=num1+num2;
            break;
        case 2:
            result=num1-num2;
            break;
        case 3:
            result=num1*num2;
            break;
        case 4:
            result=num1/num2;
            break;
        default:
            printf("invalid choice");
            break;
    }
    if(choice>=1&&choice<=4)
    {
        printf("result=%11.2f",result);
    }
}