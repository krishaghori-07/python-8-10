#include<stdio.h>
void main()
{
    int a[5];
    int i;
    printf("enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are:\n");
   for(i=0;i<5;i++)
   {
     printf("%d",a[i]);
   }
}