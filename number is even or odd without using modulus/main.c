#include <stdio.h>
#include <stdlib.h>

int main()

/* with using %*/
/*
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

  return 0;
  getch();
}
*/
/* with out using modulo*/
{
    int x;
    printf("enter the number \n ");
    scanf("%d",&x);
    if(x&1==1)
    {
        printf("the number is odd");
    }
    else
    {
        printf("the number is even");
    }
    return 0;
}
