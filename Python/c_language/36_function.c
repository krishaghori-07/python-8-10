//example of user defined function
//without return value without argument
#include<stdio.h>
void printline()
{
    printf("\n-------------------------------------------------------------");
}
//type 2
//without return value with argument
void printletter(char letter,int count)
{
    printf("\n");
    for(int i=0;i<count;i++)
    {
        printf("%c",letter)
    }
    printf("\n");
}
void main()
{
    printline();
    printletter('#',100);
}