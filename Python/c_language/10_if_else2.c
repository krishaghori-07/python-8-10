/*
write a program to accept person age and findout wheather he can apply for civil services or not.
steps
-------------------------------------------------
1.create variable age
2.accept age from user
3.check age is eligible for civil services  or not(17 and below 36)
    display person is eligible for civil services
  else
   display person is not eligible

*/
#include<stdio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>17&&age<35)
    {
        printf("person is eligible for civil services");
    }
    else
    {
        printf("person is not eligible");
    }

}
