#include <stdio.h>

int main(){
    int rows = 6;
    int choice = 0;
    printf("Enter your choice 1, 2, 3: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("#");
        }

        printf("\n");
    }
     break;

    case 2:
    for(int i=1; i<=rows; i++)
    { 
        for(int j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(2*i-1); j++)
        {
            printf("#");
        }

        printf("\n");
    }
    break;

    case 3:
 
    for(int i=1; i<=rows; i++)
    { 
        for(int j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(2*i-1); j++)
        {
            printf("#");
        }

        printf("\n");
    }
       for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=(rows*2 -(2*i-1)); j++)
        {
            printf("#");
        }

        printf("\n");
    }

    break;

    }

    return 0;
}