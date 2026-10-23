/*write a program to findout wheather the given number is prime or not.
input:11
steps
-------------------------------------------------------------------------
1.create variable number,reminder,divisor
2.take input from user in number
3.divisor=2
reminder=number%divisor
if reminder == 0 then
    print number is not prime number

*/
#include<stdio.h>
void main()
{
    int number,reminder,divisor;
    printf("enter number:");
    scanf("%d",&number);
    divisor=2;
    do{
        reminder=number%divisor
        if(reminder==0&&number!=2)
        {
            printf("it is not prime number");
        }
        divisor=divisor+1;
    }
    while(divisor<number)
    if(divisor == number || number<=2)
    {
        printf("it is prime number");
    }
}