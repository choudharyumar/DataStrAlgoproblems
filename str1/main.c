#include <stdio.h>
#include <stdlib.h>


/*
//program 1
int main()
{
    for(int i=1;i<=5;i++){
     for(int j=1; j<=5;j++){
            if(j<=i){
               printf("*");
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
    }

    return 0;
}

*/

/*
//program 2
int main()
{
    for(int i=1;i<=5;i++){
     for(int j=1; j<=5;j++){
            if(j>=6-i){
               printf("*");
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
    }

    return 0;
}

*/

/*
//program 3

int main()
{
    for(int i=1;i<=5;i++){
     for(int j=1; j<=5;j++){
            if(j>=i){
               printf("*");
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
    }

    return 0;
}

*/

/*
//program 4

int main()
{
    for(int i=1;i<=5;i++){
     for(int j=1; j<=5;j++){
            if(j<=6-i){
               printf("*");
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
    }

    return 0;
}
*/
/*
//Program 5

int main()
{
    for(int i=1;i<=5;i++){
     for(int j=1; j<=9;j++){
            if((j>=6-i)&&(j<=4+i)){
               printf("*");
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
    }

    return 0;
}

*/
/*
//Program 6

int main()
{
    for(int i=1;i<=5;i++){
            int k=1;
     for(int j=1; j<=9;j++){
            if((j>=6-i)&&(j<=4+i)&&(k)){
               printf("*");
        k=0;
            }
            else{
                printf(" ");
                k=1;
            }

    }
    printf("\n");
    }

    return 0;
}
*/

/*
//Program 7

int main()
{
    for(int i=1;i<=5;i++){

     for(int j=1; j<=9;j++){
            if((j<=6-i)||(j>=4+i)){
               printf("*");

            }
            else{
                printf(" ");

            }

    }
    printf("\n");
    }

    return 0;
}
*/
/*
//Program 8

int main()
{
    for(int i=1;i<=4;i++){
        int k=1;
     for(int j=1; j<=7;j++){
            if(j>=5-i&&j<=3+i){
               printf("%d",k);
               j<4?k++:k--;

            }
            else{
                printf(" ");

            }

    }
    printf("\n");
    }

    return 0;
}
*/
/*
//Program 9

int main()
{
    for(int i=1;i<=4;i++){
        char k='A';
     for(int j=1; j<=7;j++){
            if(j<=5-i||j>=3+i){
               printf("%c",k);
               j<4?k++:k--;

            }
            else{
                printf(" ");

            }

    }
    printf("\n");
    }

    return 0;
}

*/

//Program 10

int main()
{
    int k=0 ;
    for(int i=1;i<=7;i++){

        i<=4?k++:k--;
     for(int j=1; j<=7;j++){
            if((j>=5-k)&&(j<=3+k)){
               printf("*");
            }
            else{
                printf(" ");

            }

    }
    printf("\n");
    }

    return 0;
}
