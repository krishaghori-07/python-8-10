/*
write a program to accept body temprature from the user and decide the condition of t's health.
fahrenheit      fever level
102.9             high fever
101.2             fever
99.3               low grade fever
95.0               normal
steps
------------------------------------------
1.create variable fh
2.accept fahrenheit user intop fh variable.
3.caculate fever level a per above rules.
*/
#include<stdio.h>
void main()
{
    float fh;
    printf("enter body temprature in farenheit:");
    scanf("%f",&fh);
    if(fh>=102.9)
    {
        
        printf("you have high grade fever");
    }
    else if(fh>=101.2)
    {
        printf("you have fever");
    }
    else if(fh>=99.3)
    {
        printf("you have a low grade fever");
    }
    else
    {
        printf("you are normal");
    }
}