#include <stdio.h>
#include <stdlib.h>
/*
//even or odd
int main()
{
    int a;

    printf("enter a number=");
    scanf("%d",&a);
    if(a%2==0){
            printf("even number");

    }
    else{
        printf("odd number");
    }
    return 0;
}
*/
//Write a program to check whether a given number is divisible by 5 or not
/*
int main()
{

    int a;
    printf("enter a number=");
    scanf("%d",&a);
    if(a%5==0){
        printf(" number divisible by 5");
    }
    else{
        printf(" number is not divisible by 5");
    }
    return 0;
}
*/
/*
//Write a program to to find greater between two numbers
int main()
{
    int a,b;
    printf("enter the values of two numbers");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a is greater=%d",a);
    }

    else{
        if(a==b){
                 printf("both are equal numbers");

    }
    else{
        printf(" b is greater=%d",b);
    }
    }

}

*/
//Write a program to to find greater among three numbers

int main()
{
    int a ,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);

    //for a;-
    if(a>b&&a>c)
    {
    printf("a is greater than b and c");
    }

    if(a>b&&a<c)
    {
    printf("a is greater than b and less than c");
    }


    if(a<b&&a<c)
    {
    printf("a is less than b and less than c");
    }

    if(a<b&&a>c)
    {
    printf("a is less than b and greater than c");
    }

    //for b;

    if(b>a&&b>c)
    {
    printf("b is greater than a and c");
    }

    if(b>a&&b<c)
    {
    printf("b is greater than a and less than c");
    }


    if(b<a&&b<c)
    {
    printf("b is less than a and less than c");
    }
    if(b<a&&b>c)
    {
    printf("b is less than a and greater than c");
    }



    //for c;

    if(c>a&&c>b)
    {
    printf("c is greater than a and b");
    }

    if(c>a&&c<b)
    {
    printf("c is greater than a and less than b");
    }


    if(c<a&&c<b)
    {
    printf("c is less than a and less than b");
    }

    if(c<a&&c>b)
    {
    printf("c is less than a and greater than b");
    }


    //for all equal
    if(a=b=c)
    {
        printf("all three are equal");

    }
}
