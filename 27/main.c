#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
   //int a=4,b=6,temp;
  // temp=b;
  // b=a;
   //a=temp;
   int a,b,temp;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
   b=temp;
    printf("a=%d b=%d \n",a,b);
    //printf("%d",a);
    return 0;
}
*/
//swap two numbers without third variable
/*
int main()
{

    int a,b;
    printf(" enter two numbers ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" a=%d b=%d",a,b);
    return 0;
}

*/

/*
//Write a program to check whether a number is even or odd without using modulus(%) operator
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a&1){
            printf("odd  number");

    }
    else{
        printf("even number");
    }
    return 0;
}
*/
// without using modulus operator and bitwise
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a/2*2==a){
    printf("even  number ");
    }
    else{
        printf("odd number ");
    }
    return 0;
}

