#include <stdio.h>
int main(){
    int order = 0;
    int time = 0;
    float cost = 0;
    printf("WELCOME TO FIIFI'S ICE CREAM SHOP\nWhat would you like to order?\n");
    do{
        int flavour = 0, toppings = 0, size =0;
        printf("\n1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 – Mango\n5 -Enquiries\n");
        scanf("%i",&flavour);
        if(flavour == 1){
             printf("1 - small\n2 - large\n");
        scanf(" %i",&size);
            if(size == 1){

                printf("Flavour is Vanilla and Size is Small\n");
                cost+=5;
                time+=2;

            }
            else if(size == 2){
                    printf(" Flavour is Vanilla and Size is Large\n");
                    cost+=8; 
                    time+=3;
            }
            else{
                printf("invalid Size");
            }
            
            }
        else if(flavour == 2){
             printf("1 - small\n2 - large\n");
        scanf(" %i",&size);
            if(size == 1){
                printf("Flavour is Strawberry and Size is Small\n");
                cost+=5;
                 time+=2;
            }
            else if(size==2)
            {
                printf("Flavour is Strawberry and size is Small\n");
                cost+=8;
                time+=3;

            }
             else{
                printf("invalid Size");
            }
            
            }
        else if(flavour==3){
             printf("1 - small\n2 - large\n");
        scanf(" %i",&size);
            if(size==1){
                printf("Flavour is Chocolate and Size is Small\n");
                cost+=6;
                 time+=2;
            }
             else if(size ==2){
                    printf(" Flavour is Chocolate and Size is Large\n");
                    cost+=9;
                    time+=3;
            }
             else{
                printf("invalid Size");
            }
            
        }
        else if(flavour == 4){
             printf("1 - small\n2 - large\n");
        scanf(" %i",&size);
            if(size==1){
                printf("Flavour is Mango and Size is Small\n");
                cost+=7;
                 time+=2;
            }
             else if(size ==2){
                    printf(" Flavour is Mango and Size is Large\n");
                    cost+=10;
                    time+=3;
            }
             else{
                printf("invalid Size");
            }
            
        }
        else if(flavour == 5){
            printf("A customer service agent will be with you shortly\n");
            return 0;
        }
        else{
             
            printf( "Invalid flavour entry\n");
        
        return 0;
        }  
         do{

        printf(" \nChoose from the list of Toppings \n1-Sprinkles\n2-Whipped Cream\n3-Chopped Nuts\n4-Coconut Shavings\n5-Go to Menu\n");
        scanf(" %i", &toppings);
        if(toppings==1){
            printf("Topping is Sprinklers");
            cost+=2;
           time+=1;
           toppings++;
           
        }
          else if(toppings==2){
            printf("Topping is Whipped Cream");
            cost+=3;
            time+=1;
            toppings++;
        }
          else if(toppings==3){
            printf("Topping is Chopped Nuts");
            cost+=4;
            time+=1;
            toppings++;
        }
          else if(toppings==4){
            printf("Topping is Coconut Shavings");
            cost+=5;
            time+=1;
            toppings++;
        }
        
          else if(toppings==5){

            toppings = 0;
            
        }
        else{
            printf("invalid topping entry\n");
            return 0;
        }
    }while(toppings>0);
    int decision;
     printf("Would You like anything else?\n1-Yes\n2-No\n");
     scanf(" %i",&decision);
     if(decision==1){
         order+=1;
     }
     else if(decision==2){
            order = 0;
            printf("The Total Cost of Your Order is : %f\n The Total Time of Your Order : %i\n", cost,time);
            
     }
       
        
    }while(order>0);
    printf("Kindly Wait For Your Order\n");
    for(int i = 0; i<=time;order){
        printf("%d\n",time--);
        
    }
    printf( "\nHere is your order\n Thanks for coming to Fiifi's ice Cream");
 
    
    
    
   
    
     

    
}