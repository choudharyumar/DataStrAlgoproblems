#include <stdio.h>
#include <stdlib.h>

/*
//Write a program to count digits in a given number.
int main()
{
    int x,N,count=0;
    printf("Enter the value of N :");
    scanf("%d",&N);
    while(N!=0)
    {
        N=N/10;
        count++;
    }

    printf("the total number of digits in a giver number is %d",count);
    return 0;
}


//Write a program to calculate sum of the digits of a given number


int main()
{
    int x,s=0,N,count=0;
        printf("Enter the value of a give :");
        scanf("%d",&x);
        while (x!=0)
        {

            N=x%10;
            s=s+N;
            x=x/10;
            count++;
        }
        printf("sum of digits of a given number is : %d",s);
        return 0;
}


//Write a program to reverse a number

int main()
{
    int r,out=0,count=0, n;
    printf("Enter a number :");
    scanf("%d",&n);
    while (n!=0)
        {
            r=n%10;
            out=out*10+r;
            n=n/10;
            count++;

    }
    printf("the reverse of a number is : %d",out);
    return 0;


}

//Write a program to print all Armstrong numbers under 1000.
int main()
{

    int arm_strong,n,r,x,count=0;
    printf("the armstrong numbers are  :\n");
    for (n=1;n<=1000;n++)
    {
        arm_strong=0;
         x=n;
        while(x!=0)
        {
            r=x%10;
            arm_strong=arm_strong+r*r*r;
            x=x/10;
        }
        if(arm_strong==n)

             printf(" %d \n ",n);

}
}


//Write a program to calculate LCM of two numbers
int main()
{
    int a,b,x;
    printf("enter the value of two numbers \n");
    scanf("%d%d",&a,&b);
    for(x=1;x<=a*b;x++)

        if (x%a==0&&x%b==0)

            break;

    printf("the lcm of number a and b is : %d \n",x);



}


//Write a program to calculate HCF of two numbers

int main()
{
    int h,a,b;
    printf("enter the value of two numbers :\n");
    scanf("%d%d",&a,&b);
    for (h=a<b?a:b;h>=1;h--)

        if(a%h==0&&b%h==0)
            break;
        printf("the hcf of two numbers is %d \n",h);



}
/*
//Write a program to check whether a given number is prime or not

int main()
{
    int n,i;
    printf("enter a number :");
    scanf("%d",&n);
    for( i=2;i<=n-1;i++)

        if(n%i==0 )
        break;

        if(i==n )
        {
            printf(" %d the given number is  prime \n",n);
        }

        else
        {
            printf(" %d the given number is not  prime \n",n);
        }



}

//Write a program to print all prime numbers between two given numbers

int main()
{
    int a,b,i,x;
    printf("enter the value of two numbers: \n");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        for(x=2;x<i;x++)

        if(i%x==0)
        break;
    if(i==x)
    printf(" %d\n ",x);
    }

}

//Write a program to print all prime factors of a given number. For example prime factors of 36 are 2,2,3,3

int main()
{
    int a,i;
    printf("enter the value of a number: \n");
    scanf("%d",&a);
    for(i=2;a>1;i++)
    {
        while(a%i==0)
        {
                printf("%d ",i);
                a=a/i;
        }
    }

}

//Write a program to print first N terms of Fibonacci series


int main()
{
    int n,i;
    int a=-1;
        int b=1;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        int c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    }

}
*/
//Write a program to check co-prime number
int main()
{
    int a,b,i,x;
    printf("enter the value of n:\n");
    scanf("%d%d",&a,&b);
    x=a<b?a:b;
    for(i=2;i<=x;i++)
    {
        if(a%i==0 && b%i==0)
            break;

    }
    if(i==x+1)
        {
                printf("yes it is a co prime number ");
        }
        else
            printf("no it is not a co prime number ");

}
