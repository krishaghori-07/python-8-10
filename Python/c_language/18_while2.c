/*write a program to display multiplication table as per user input
input:5
output:
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
..........
..........
5 * 10 = 50

steps
----------------------------------------------------------------------
1.create variable number and multiplier and answer
2.accept input from user
3.multiplier=1
4.answer=number*multiplier
5.print number * multiplier = answer(5*1=5)
6.multiplier =multiplier+1

7.answer=number*multiplier
8.print number * multiplier = answer(5*2=5)
9.multiplier =multiplier+1
*/
#include<stdio.h>
void main()
{
    int number,multiplier,answer;
    printf("enter number:");
    scanf("%d",&number);
    multiplier=1;

   while(multiplier<=10)
   {
     answer=number*multiplier;
    printf("%d *  %d = %d\n",number,multiplier,answer);
    multiplier=multiplier+1;
   }
}