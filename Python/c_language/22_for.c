/*write a program to make sum of all digits in given number
input:12345
sum:15
steps
--------------------------------------------------------------
1.create variable number
2.take input from user number
3.get last didgits of the  number
    reminder(5)=number%10
4.add reminder into sum
    sum=sum+reminder
5.number=number/10
6.get last digit of number
    reminder(4)=number%10
7.sum=sum+number
8.number=number/10
*/
#include<stdio.h>
void main()
{
    int number,reminder,sum=0;
    printf("enter number:");
    scanf("%d",&number);
    for(sum=0;number>0;number=number/10)
    {
        reminder=number%10;
        sum=sum+reminder;
    }
    printf("%d",sum);
}
 