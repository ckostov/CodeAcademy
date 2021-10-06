#include <stdio.h>

int main(){
    int wagon = 3;
    int camper = 3;
    int wagonPrice = 90;
    int camperPrice = 100;
    int choice = 0;
    int days = 0;
    int sum = 0, fullSum = 0;
    int anythingElse = 0;
    
     printf("1-Wagon, 2-Camper\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter days: ");
            scanf("%d", &days);
            if(days > 0){
            sum = days*wagonPrice;
            fullSum += sum;
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
            fullSum += sum;
            }
            else {
                printf("Wrong input!");
            }
            break;

            default:
            printf("Have a nice day");
            break;
    
}   
    do{
        printf("Do you want anything else:\n1-Yes\n2-No\n");
        scanf("%d",&anythingElse);
        printf("1-Wagon, 2-Camper\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter days: ");
            scanf("%d", &days);
            if(days > 0){
            sum = days*wagonPrice;
            fullSum += sum;
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
            fullSum += sum;
            }
            else {
                printf("Wrong input!");
            }
            break;

            default:
            printf("have a nice day");
            break;
    }


}while(anythingElse != 2);  
    if(anythingElse == 2){
        printf("Your bill is %d BGN and have a nice day", fullSum);
    }
    return 0;
}