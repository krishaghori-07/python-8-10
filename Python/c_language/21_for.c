/*
write a c program to find the sum of even number and odd numbers between 1 to 100.*/
#include<stdio.h>
void main()
{
      int i,evensum=0,oddsum=0;
      for(i=1;i<=100;i++)
      {
        if(i%2==0)
        {
            evensum=evensum+1;
        }
        else
        {
            oddsum=oddsum+1;
        }
      }

}