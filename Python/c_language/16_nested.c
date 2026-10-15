/*write a program to findout given year is leap year or not.
  steps
  -----------------------------------------------------------------------
  1.create variable year,reminder1,reminder2,reminder3;
  2.accept year from user
  3.calculate year is divisible by 4,100,400
    reminder1=year%4;
    reminder2=year%100;
    reminder3=year%400;
  4.if reminer1==0 and reminer2!=0
    print given year is leap year
  5.else
    if reminer2==0 and reminder3==0 then
    print given year is leap year
    else
    print given year is not leap year.
*/
#include<stdio.h>
void main()
{
    int year,reminder1,reminder2,reminder3;
    printf("enter year:");
    scanf("%d",&year);
    reminder1=year%4;
    reminder2=year%100;
    reminder3=year%400;

    if(reminder1==0&&reminder2!=0)
    {
        printf("given year is leap year");
    }
    else
    {
        if(reminder2==0&&reminder3==0)
        {
            printf("given year is leap year");
        }
        else
        {
            printf("given year is not leap year");
        }
    }
}