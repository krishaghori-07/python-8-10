/*write a program to findout reverse of given number
input:12345
output:54321
steps
---------------------------------------------------------------------------
1.create variable number,reverse,reminder
2.accept input from user into number
3.get last didgit of amount
  reminder(5)=number%10
  reverse=(rerverse*0)+reminder
  number=number/10;

*/
#include<stdio.h>
void main()
{
    int number,reminder,reverse;
    reverse=0;
    printf("enter number:");
    scanf("%d",&number);
    do{
        reminder=number%10;//5
        reverse=(reverse*10)+reminder;
        number=number/10;
    }
    while(number>0)
    printf("%d",reverse);
}