/*write a program to findout the qube of given positive integer number
steps
----------------------------------------------------------------
1.create variable qube,number
2.accept input in variable number
3.if number is negative
    convert negative number into positive
    3.1 number=0-number
    3.2 print number was negative so it is converted into positive
4.calculate qube of given number
qube=number*number*number;
5.display qube.
*/
#include<stdio.h>
void main()
{
    int number,qube;
    printf("enter number:");
    scanf("%d",&number);
    if(number<0)
    {
        number=0-number;
        printf("number was negative so converted into positive");
    }
    qube=number*number*number;
    printf("qube:%d",qube);
}
