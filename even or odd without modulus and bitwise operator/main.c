#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("enter a number \n");
    scanf("%d",&x);
    if(x/2*2==x)
    {
        printf("the number is even");


    }
    else
    {
    printf("the number is odd");
    }

    return 0;
}
