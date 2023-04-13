#include <stdio.h>
float balance = 0;
// function definition of various functions
int authenticate(int pin);
float requestAmount();
void withDraw(float requestAmount);
void deposit(float requestAmount);
void transfer(float requestAmount);

// this function authenticates the pin in puted by the user
int authenticate(int x){
    if (x == 1000){
        return 1;
    }
    return 0;
}
// this function uses scanf to request for the amount of money involved in the transaction and returns it's value as float
float requestAmount(){
    float amount;
    printf("ENTER AMOUNT\n");
    scanf("%f", &amount);

    return amount;

// this function recieves requetAmount as a parameter an does the withdrawal proces and prints the amount withdrwan and balance
}
void withDraw(float requestAmount){
    if(balance-requestAmount > 0 || balance >0 ){
    balance -= requestAmount;
    printf(" Amount Withdrawn is %f\nYour Balance is %f ",requestAmount, balance);
    }
    else{
        printf(" Insufficient Funds! Try Again\n");
    }
}

// this function recieves requetAmount as a parameter an does the depositing proces and prints the amount withdrwan and balance
void deposit(float requestAmount){
    balance += requestAmount;
    printf(" Amount Deposited is %f\nYour Balance is %f ",requestAmount, balance);
}

// this function recieves requetAmount as a parameter an does the transfer proces and prints the amount withdrwan and balance
void transfer(float requestAmount){
     int accNumber;
     printf(" Type in Recipients Account Number\n");
    scanf("%i", &accNumber);
    if(balance-requestAmount > 0 || balance > 0 ){

    balance -= requestAmount;
    printf(" Amount Transfered to %i is %f\nYour Balance is %f ",accNumber ,requestAmount, balance); 
   

}
else{
        printf(" Insufficient Funds! Try Again\n");
    }
}


int main(){
 start:
 printf("WELCOME TO ABC BANK\nEnter your four digit pin\n");
 static int tries = 0;
 int pin=0; 
 scanf("%d", &pin);
 menu:
 if(authenticate(pin) && tries <= 3){
 int menu_item;
 printf("Select an option\n1. Check Balance\n2. Withdrawal\n3. Deposit\n4. Transfer\n");
 scanf("%d", &menu_item);
 switch(menu_item){
 case 1: printf("%g\n", balance);
 break;
 case 2: withDraw(requestAmount());
 break;
 case 3: deposit(requestAmount());
 break;
 case 4: transfer(requestAmount());
 }
 int response;
 printf("Would you like to perform another transaction?\n1. Yes\n2. No\n");
 scanf("%d", &response);
 if(response == 1){goto menu;}
 
printf("Thank you for banking with us\n");
return 0; 
}
 
 else if (tries<4){
     ++tries;
 printf("Invalid pin after %d tries\n", tries);
 goto start;
 }
 else{
printf(" Maximum Number of Attempts Reached Try Again Later");
 }
}
  
