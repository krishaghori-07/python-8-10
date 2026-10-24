/*
write a program to print following pattern
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<stdio.h>
void main()
{
    int column=1;
    int row;
    for(row=5;row>=1;row--)
    {
        for(column=1;column<=row;column++)
        {
            printf("%d ",column);
        }
        printf("\n");
    }
}