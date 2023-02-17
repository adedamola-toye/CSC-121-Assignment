#include <stdio.h>

int main(void){
     //Define variables
     float sales; //total gross sales
     float salary; //total salary

     //Initialization phase
    salary = 0; //initialize salary
    
    //Processing phase
    //Get Input from user
    printf("Enter sales in dollars (-1 to end): "); //prompt for input
    scanf("%f",&sales); //read sales from user

    //while sentinel has not yet been entered by user
    while (sales != -1){
        salary = 200 + (0.09*sales); //Calculates salary
        printf("Salary is: $%.2f\n", salary); //Termination phase: display salary
        
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f",&sales);
    }

    }