#include<stdio.h>
int sum(int first,int second)
{
printf( " sum: %d",first+second);
}
int substract(int a,int b)
{ 
    printf(" substract:%d",a-b);
}

int multiply(int first,int second)
{
    printf(" Multiply:%d",first*second);
}
int devision(int a,int b)
{
printf(" devision:%d",a/b);
}

int main()

{
int num;
printf("\n 1.Addition");
printf("\n 2.Substract");
printf("\n 3.multiply");
printf("\n 4.devision");
printf(" \n please select any option:");
scanf(" %d",&num);

int firstnumber=50;
int secondnumber=20;

if(num==1)
{
    sum(firstnumber,secondnumber);
}
else if (num==2)
{
    substract(firstnumber,secondnumber);
}
if(num==3)
{
    multiply(firstnumber,secondnumber);
}
else if (num==4)
{
    devision(firstnumber,secondnumber);
}
return 0;
}

