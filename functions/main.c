#include <stdio.h>
#include <stdlib.h>


/*
//program to calculate the factorial of a number
 main()
 {
 int x;
 x=fact(3);
 printf("%d",x);

 }
int fact(int n){
int i,f=1;
for(i=1;i<=n;i++)
    f=f*i;
    return (f);

}

*/

/*
//Program to calculate area of a circle
float area();
main(){


float x=area();
printf("%f",x);

}

float area(){
    float r;
    printf("enter the radius of circle");
    scanf("%f",&r);
r=r*r;
r=3.14 *r;
return r;
}
*/
/*
// program to calculate sum of N natural numbers


// function declaration
void sum1(void);
void sum2(int);
int sum3(void);
int sum4(int);
//TNRN
 main(){
int k=sum3();
printf("%d",k)
}
void sum1() {
    int N, s = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        s = s + i;
    }

    printf("The value of the sum is %d\n", s);
}


////TSRN
void sum2(int N) {
    int  s = 0;


    for (int i = 1; i <= N; i++) {
        s = s + i;
    }

    printf("The value of the sum is %d\n", s);
}


//TNRS
int sum3() {
    int N, s = 0;

printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        s = s + i;
    }

return s;
}
///TSRS
int sum4(int N) {
    int  s = 0;


    for (int i = 1; i <= N; i++) {
        s = s + i;
    }

return s;
}

*/

/*
//program to calculate the sum of squares of natural numbers

int s_sum();
main(){
int x=s_sum();
printf("%d",x);
}

int s_sum (){
 int N,s=0;
 printf("enter the value of N");
 scanf("%d",&N);
 for(int i=1;i<=N;i++){

    s=s+i*i;
 }
 return s;

}
*/


/*
// program to calculate the sum of two prime numbers

main(){
int x,i;
printf("enter a number");
scanf("%d",&x);
for(i=2;i<=(x-i);i=nextPrime(i)){

    if(isPrime(x-i))
        printf("%d +%d=%d\n",i,x-i,x);
    }
}
int nextPrime(int n){
    do
    n++;
    while(!isPrime(n));
    return (n);
}

int isPrime(int n){
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    return 0;
return(1);

}
*/

// program of factorial with recursion

int fact(int );
 main()
{
int k=fact(4);
printf("the factorail of given number is %d",k);
getch();
return 0;
}

int fact(int n){
if (n>1){
    return (n*fact(n-1));
}
else{
    return 1;
}
}
