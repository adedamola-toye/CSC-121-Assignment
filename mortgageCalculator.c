#include <stdio.h>

int main(void){
    //Define variables
    int accountNo, mortgageAmount, mortgageTerm, total_Interest, totalAmountPayable, monthlyPayment;
    float interestRate;

    //Initialization
    total_Interest = 0;
    totalAmountPayable = 0;

    //Input account number
    printf("Enter account number (-1 to end) :");
    scanf("%d", &accountNo);
    
    //while the user has not yet entered -1 to end the program
    while (accountNo != -1){
        //Input from user
        //Input mortgage amount
        printf("Enter mortgage amount (in dollars) : ");
        scanf("%d", &mortgageAmount);
        //Input mortgage term
        printf("Enter mortgage term (in years) : ");
        scanf("%d", &mortgageTerm);
        //Input interest rate
        printf("Enter interest rate (as a decimal) : ");
        scanf("%f", &interestRate);

        //Calculations
        total_Interest = mortgageAmount * interestRate * mortgageTerm;
        totalAmountPayable = mortgageAmount + total_Interest;

        //Termination phase: display the monthly payment if mortgageTerm is not equal to 0
        if (mortgageTerm != 0){
            monthlyPayment = totalAmountPayable/(mortgageTerm*12);
            printf("The monthly payment is : %d\n", monthlyPayment );
        }
        //Print this error message if mortgageTerm is zero to avoid fatal errors
        else {
            printf("The mortgage term must not be zero");
        } 
        //Makes sure the program keeps asking for account number so that we can terminate it if we wan to
         printf("Enter account number (-1 to end) :");
        scanf("%d", &accountNo);
    }

}
