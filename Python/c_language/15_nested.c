/*write a program to display month name from given month number
steps
---------------------------------------------------------------
1.create variable month
2.accept input from user in month variable.
3.if month is >1  and month<=12 then
    4.check month number
    3.1 if month==1 then
    print it is january
    3.2 if month == 2 then
    print it is february
else 
    print it is not valid month
*/
#include<stdio.h>
void main()
{
    int month;
    printf("enter month(1 to 12):");
    scanf("%d",&month);
    if(month>=1&&month<=12)
    {
       if(month==1)
    {  
        printf("it is january");
    }
    else if(month==2)
    {
        printf("it is february");
    }
    else if(month==3)
    {
        printf("it is march");
    }
    else if(month==4)
    {
        printf("it is April");
    }
    else if(month==5)
    {
        printf("it is may");
    }
    else if(month==6)
    {
        printf("it is june");
    }
    else if(month==7)
    {
        printf("it is july");
    }
    else if(month==8)
    {
        printf("it is August");
    }
    else if(month==9)
    {
        printf("it is september");
    }
    else if(month==10)
    {
        printf("it is october");
    }
    else if(month==11)
    {
        printf("it is november");
    }
    else if(month==12)
    {
        printf("it is december");
    }  
    }
    else
    {
        printf("it is not valid month");
    }
}