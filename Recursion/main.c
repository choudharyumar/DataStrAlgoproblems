#include <stdio.h>
#include <stdlib.h>

/*
// sum of n natural numbers
 main()
{
  int k;
  k=fun(3);
  printf("%d",k);

}
int fun(int a)
{
    int s;
    if(a==1)
        return (a);
    s=a+fun(a-1);
    return(s);

}
*/

//problem of tower of hanoi
void toh (int ,char,char, char);
 int main()
{
    int d;
    printf("enter the number of disks :");
    scanf("%d",&d);
    toh(d,'A','B','C');
    getch();
    return 0;




}

void toh(int n,char beg,char aux,char end)
{
    if(n>=1)
    {
        toh(n-1,beg,end,aux);
        printf(" %d disk move %c to %c \n",n,beg,end);
         toh(n-1,aux,beg,end);
    }
}
