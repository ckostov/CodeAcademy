#include <stdio.h>

int main(){
    int wagon = 3;
    int camper = 3;
    int wagonPrice = 90;
    int camperPrice = 100;
    int choice = 0;
    int days = 0;
    int sum = 0;

    printf("1-Wagon, 2-Camper\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Enter days: ");
        scanf("%d", &days);
        if(days > 0){
        sum = days*wagonPrice;
        printf("The sum is %d leva", sum);
        }
        else{
            printf("Wrong input!");
        }
        break;
        
        case 2:
        printf("Enter days: ");
        scanf("%d", &days);
        if(days > 0){
        sum = days*camperPrice;
        printf("The sum is %d leva", sum);
        }
        else {
            printf("Wrong input!");
        }
        break;

        default:
        printf("You are troll, bye!");
        break;
    }



    return 0;
}