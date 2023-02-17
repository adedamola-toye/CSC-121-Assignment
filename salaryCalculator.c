#include <stdio.h>

int main(void){
    //Define variables
    int noOfHours; //number of hours worked
    float hourlyRate; //hourly rate of the worker
    float salary; //salary of the worker
    int extraHours; //extra hours worked

    //Initialization phase
    salary = 0;

    //Processing stage
    printf("Enter # of hours worked (-1 to end): ");  //prompts user to input number of hours worked
    scanf("%d", &noOfHours); //reads number of hours inputted by user

    //while sentinel has not yet been inputted by user
    while (noOfHours != -1){
        printf("Enter hourly rate of the worker ($00.00): ");  //prompts user to input hourly rate
        scanf("%f", &hourlyRate); //reads hourly rate inputted by user

        if (noOfHours <=40){ //condition for when there is no overtime
            salary = noOfHours * hourlyRate; //salary formula
            printf("Salary is $%.2f\n", salary); //display salary
        }
        if (noOfHours > 40){ //condition for when there is overtime
            extraHours = noOfHours - 40; 
            salary = (40 * hourlyRate) + extraHours*(hourlyRate*1.5);  //salary formula when there is overtime
            printf("Salary is $%.2f\n", salary); //display salary
        }
        printf("Enter # of hours worked (-1 to end): ");  //prompts user to input number of hours worked
        scanf("%d", &noOfHours); //reads number of hours inputted by user
    }
}