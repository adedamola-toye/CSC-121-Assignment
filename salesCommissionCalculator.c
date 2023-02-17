#include <stdio.h>

int main(void){
     //Define variables
     float sales; //total gross sales
     float salary; //total salary

     //Initialization phase
    salary = 0; //initialize salary
    
    //Processing phase
    //Get Input from user
    printf("Enter sales in dollars (-1 to end): "); //prompt user to input the sales
    scanf("%f",&sales); //read sales from user

    //while the user has not yet entered -1 to end the program
    while (sales != -1){
        salary = 200 + (0.09*sales); //Calculates salary
        printf("Salary is: $%.2f\n", salary); //Termination phase: display salary
        
        printf("Enter sales in dollars (-1 to end): "); //prompt user to input the sales again
        scanf("%f",&sales);  //reads sales from user
    }

    }
