#include <stdio.h>
#include <stdlib.h>

/*
//print my name five times on a screen
int main()
{
    int i;
    for (i=0;i<5;i++){
        printf("umar hayat!\n");
    }

    return 0;
}

//print first 10 natural numbers
int main(){
int i=1;
for(i;i<11;i++){

    printf(" natural numbers: %d \n ",i);
}
return 0;
}





//print first 10 natural numbers in reverse order
int main(){
int i=10;
for(i;i>0;i--){

    printf(" natural numbers: %d \n ",i);
}
return 0;
}

*


//print N natural numbers and N is given by user
int main()
{
    int n,N;
    printf("enter the natural number");
    scanf("%d",&N);
    for (n=1;n<N;n++)
    {
        printf("%d \n",n);
    }
    return 0;
}
*

//print N natural numbers in reverse order and N is given by user
int main()
{
    int n,N;
    printf("enter the natural number");
    scanf("%d",&N);
    for (n=N;n>=1;n--)
    {
        printf("%d \n",n);
    }
    return 0;
}


/*
*
//first 10 even numbers
int main()
{

    int i=0;
    for (i;i<20;i++)
        {
        if(i%2==
           0)
        {
            printf("%d \n",i);
        }
    }
}


*
//first 10 odd numbers
int main()
{

    int i=0;
    for (i;i<20;i++)
        {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}



//print N even numbers and N is given by user

int main()
{

    int i,N ;
    printf("enter the vale of N");
    scanf("%d",&N);
    for (i;i<=N;i++)
        {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
}



}



//print N odd numbers and N is given by user

int main()
{

    int i,N ;
    printf("enter the vale of N:");

    scanf("%d",&N);
    for (i;i<=N;i++)
        {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}


//Write a program to print N even numbers in reverse order

int main()
{
    int i,N;
    printf("enter the value of N:");
    scanf("%d",&N);
    for(i=N;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;

}

//Write a program to print N odd numbers in reverse order

int main()
{
    int i,N;
    printf("enter the value of N:");
    scanf("%d",&N);
    for(i=N;i>=0;i--)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
    return 0;

}


//Write a program to print table of user’s choice

int main()
{
    int i,t;
    printf("enter the value of your choice table :");
    scanf("%d",&t);
    for(i>=1;i<=20;i++)
    {

        printf(" %d \n",t*i);
    }
}



//Write a program to calculate sum of first N natural numbers

int main()
{
    int i,s=0,N;
    printf("enter the value of N: ");
    scanf("%d",&N);
    for(i>=1;i<=N;i++)
    {

        s=s+i;

    }
    printf(" sum of N is = %d ",s);
return 0;
}


//Write a program to calculate product of first N natural numbers



int main()
{
    int i,s=1,N;
    printf("enter the value of N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {

        s=s*i;

    }
    printf(" product of N is = %d ",s);
return 0;
}


//Write a program to calculate factorial of a number

int main()
{

    int i,s=1,N;
    printf("enter the value of N :");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        s=s*i;
    }
    printf("the factorail of a given number is %d",s);
    return 0;

}


//Write a program to calculate sum of first N even natural numbers

int main()
{
    int i,s=0, N;
    printf("enter the value of N : ");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        if (i%2==0)
        {
            s=s+i;
        }
    }
    printf("sum of even %d",s);
    return 0;
}


//Write a program to calculate sum of first N odd natural numbers

int main()
{
    int i,s=0, N;
    printf("enter the value of N : ");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        if (i%2!=0)
        {
            s=s+i;
        }
    }
    printf("sum of even %d",s);
    return 0;
}

*/

//Write a program to calculate x power y.
int main()
{

int i,s=1 ,x,y;
printf("enter the value of x :");
scanf("%d",&x);
printf("enter the value of y :");
scanf("%d",&y);
for(i=1;i<=y;i++)
{
s=s*x;
}

printf("the value of power is : %d",s);
return 0;
}


