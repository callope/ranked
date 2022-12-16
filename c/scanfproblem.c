#include <stdio.h>

int main(){
    char firstLetterofName;
    int numOfVisits;
    float priceOfDrink;   //Creating the variables leaving them empty for now
    float total;

    printf("Hello! What is your name?\n");
    scanf("%c", &firstLetterofName);            //Asking for an inputting the first letter of users name

    printf("How many times have you visited Starbucks in a month\n");
    scanf("%d", &numOfVisits);      //Asking and inputting number of visits

    printf("What is the price of the drink you order?\n");
    scanf("%f", &priceOfDrink);     //Asking and inputting price of drink

    total = priceOfDrink * numOfVisits;

    printf("Wow %c! You have spent $%f on Starbuck!", firstLetterofName, total);

    return 0;

}
