#include <stdio.h>

int main(void){
    //Define variables
    float principal; //variable for loan principal
    float rate;  // variable for interest rate
    int days; // variable for term of the loan in days
    float interestCharge;

    //Initializing phase
    interestCharge=0;

    //Processing phase
    printf("Enter loan principal (-1 to end) : "); //prompt user to input principal
    scanf("%f", &principal); //reads principal inputted by user

    //while the user has not yet entered -1 to end the program
    while (principal !=-1){
        printf("Enter interest rate : "); //prompts user to input interest rate
        scanf("%f", &rate); //reads interest rate inputted by user

        printf("Enter term of the loan in days : "); //prompts user to input term of loan
        scanf("%d", &days);  //reads term of loan in days given by user

        interestCharge = principal * rate * days/365; //Calculation

        //Termination phase
        printf("The interest charge is %.2f\n", interestCharge); //Display interest value

        printf("Enter loan principal (-1 to end) : "); //prompt user to input principal again
        scanf("%f", &principal); //reads principal inputted by user

    }
}
