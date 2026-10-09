/*
write a program to findout which is cheaper product and which is expensive product.
1.create variable price1,price2,weight1,weight2,price_per_gram1,price_per_gram2.
2.accept input from user for price1 and weight1.
3.accept input from user for price2 and weight2.
4.findout the price_per_gram1
    price_per_gram1=price1/weight1
5.findout the price_per_gram2
    price_per_gram2=price2/weight2
6.findout chepest product
if price_per_gram1<price_per_gram2
{
print 1st product is cheaper
}
else
{
print 2nd product is cheaper
}
*/
#include<stdio.h>
void main()
{
    int price1,price2,weight1,weight2;
    float price_per_gram1,price_per_gram2;
    printf("enter 1st product price:");
    scanf("%d",&price1);
    printf("enter 1st weight:");
    scanf("%d",&weight1);
    printf("enter 2nd price:");
    scanf("%d",&price2);
    printf("enter 2nd weight:");
    scanf("%d",&weight2);
    price_per_gram1=price1/weight1;
    price_per_gram2=price2/weight2;
    if(price_per_gram1<price_per_gram2)
    {
        printf("product 1 is cheaper");
    }
    else
    {
        printf("product 2 is cheaper");
    }
}