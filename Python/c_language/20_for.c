/*
write a program to print the following pattern
1  8   27   64   125......10000.
1  2    3    4     5.............
steps
--------------------------------------------------
1.create variable number,qube
2.store 1 in number
  findout qube

3.qube=number*number*number;
4.display qube 1
5.increase number by 1

6.qube=number*number*number
7.display qube 8
8.increase by 1


*/
#include<stdio.h>
void main()
{
    int number,qube;
    for(number=1;number<21;number=number+1)
    {
        qube= number*number*number;
        printf("%8d",qube)
    }
}