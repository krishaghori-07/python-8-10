/*write a program to print following pattern.
1  3  5  7  9  11  13  15  17 ......99
steps
------------------------------------------
create variable number
store 1 in variable 

print number
number(3)=number+2

print number
number(5)=number+2

print number
number(7)=number+2
*/
#include<stdio.h>
void main()
{
    int number;
    number=1;

    while(number<=99)
    {
        printf("%5d",number);
        number=number+2;
    }
    printf("\n number=%d",number)
}