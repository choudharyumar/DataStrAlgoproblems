#include <stdio.h>
#include <stdlib.h>

int main()
/*
{
    int a,b,temp;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);
    return 0;
}
*/
/* swapping of two numbers with out using third variable*/
{
    int a,b;
    printf("enter two numbers \n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;
}


// working on a big thing





