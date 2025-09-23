#include<stdio.h>
#include<math.h>

int main(){

     float moneyBalance = 500;
     float amountDeposit;
     int Pin;
     float moneyWithdraw;
     int numberChoice;
     int attempts = 0; 
     int maxAttempts = 3;

    while (attempts < maxAttempts){
        printf("\nEnter PIN: ");
        scanf("%d", &Pin);

        if (Pin == 1234) {
              printf("PIN accepted!");   
              break;
        } else {
              printf("Access denied!");
              attempts++;
        }    
    }

    if (attempts == maxAttempts) {
        printf("\nToo many incorrect attempts. Exiting...\n");
        return 0;
    }
    
    while (1){
        printf("\n\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&numberChoice);

        if(numberChoice == 1){
            printf("Your balance is: P%.2f", moneyBalance );
        }
        else if (numberChoice == 2){
            printf("Enter amount to deposit: ");
            scanf("%f", &amountDeposit);
            moneyBalance = moneyBalance  + amountDeposit;
            printf("Deposited successfully!\n");
            printf("Your new balance is: P%.2f", moneyBalance);
        }
        else if( numberChoice == 3){
            printf("Enter amount to withdraw: ");
            scanf("%f", &moneyWithdraw);

            if(moneyWithdraw > moneyBalance){
                printf("Insufficient Balance!");
            } else {
                printf("You withdraw: P%.2f\n", moneyWithdraw);
                moneyBalance = moneyBalance - moneyWithdraw;
                printf("Your new balance is: P%.2f",moneyBalance);
            }
        }
        else if(numberChoice == 4){
            printf("Exiting...");
            break;
        }
        else{
            printf("Please try again...");
        }
    }   
        
    return 0;
}