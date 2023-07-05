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
*/
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
    int a,b;
    printf("enter the value of two numbers \n");
    scanf("%d%d",&a,&b);
    printf("the lcm of number a is :%d \n the lcm of number b is : %d \n",)

}
