#include<stdio.h>
void main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    int sum,i;
    sum=0;
 for(i=0;i<=9;i++)
 {
       sum=sum+array[i];
 }
   
    printf("sum = %d",sum);
}