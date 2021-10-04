#include <stdio.h>

int main(){
    float tomatoesPrice = 4.5;
    float flowerPrice = 1.80;
    float milkPrice = 0.50;
    float icecreamPrice = 0.60;
    float candyPrice = 1.50;
    float lollypopPrice = 0.15;
    int choice = 0;
    float sum = 0;

    printf("Enter your choice:\n1 - tomatoes\n2 - flower\n3 - milk\n4 - icecream\n5 - candy\n6 - lollypop\n7 - exit shop");

    do{
        scanf("%d", &choice);
        switch(choice){
            case 1:
            sum += tomatoesPrice;
            break;

            case 2:
            sum += flowerPrice;
            break;

            case 3:
            sum += milkPrice;
            break;

            case 4:
            sum += icecreamPrice;
            break;

            case 5:
            sum += candyPrice;
            break;

            case 6:
            sum += lollypopPrice;
            break;
        }

    }while(choice != 7);

    printf("The price for your products is: %.2f", sum);

    return 0;
}