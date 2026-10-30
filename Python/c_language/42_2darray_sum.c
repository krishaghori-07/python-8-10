//sum of the array
#include<stdio.h>
void main()
{
    int a[2][2]={
        {10,20},
        {30,40}
    };
    int b[2][2]={
        {5,10},
        {15,20}
    };
    int c[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition of two arrays:\n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
         printf("%d",c[i][j]);
    }
    printf("\n");
   }
  
    
}