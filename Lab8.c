#include <stdio.h>
#include <stdbool.h>


float additionFunct(float* x, float y);
float substractionFunct(float* x , float y);
float multiplicationFunct(float* x, float y);
float divisionFunct( float* x, float y);


float additionFunct(float* x, float y){
    printf("%f + %f\n", *x, y);
    *x+=y;
     return *x;
}
float substractionFunct(float* x , float y){
     printf("%f - %f\n", *x, y);
     *x-=y;
      return *x;
}
float multiplicationFunct(float *x, float y){
     printf("%f * %f\n", *x, y);
     *x*=y;
      return *x;
}
float divisionFunct( float *x, float y){
     printf("%f / %f\n", *x, y);
     *x/=y;
      return *x;
}

int main(){
    printf("0\t1\t2\t3\t4\t5\t6\t7\t8\t\t9\n+\t-\t*\t/\t\t@0\t\t#0\n");
    float Operand1;
    float Operand2;
    float* pOperand1 = &Operand1;
    
    char Operator;
    bool StatusOnOff = true;
    start:
    printf("Start Calculations:)\n");
    scanf(" %f", &Operand1);
    do{
        scanf(" %c", &Operator);
        scanf(" %f", &Operand2);
        switch (Operator){
        case '+':additionFunct(&Operand1,Operand2);
         printf("%f\n", *pOperand1);
        break;
        case '-':substractionFunct(&Operand1,Operand2);
        printf("%f\n", *pOperand1);
        break;
        case '*': multiplicationFunct(&Operand1,Operand2);
        printf("%f\n", *pOperand1);
        break;
        case'/':divisionFunct(&Operand1,Operand2);
         printf("%f\n", *pOperand1);
        break;
        case '#': printf("Goodbye :(\n"); StatusOnOff = false; 
        break;
        case '@': goto start;
        break;
        default: printf("Error :(\n");
        goto start;
         }
    }while(StatusOnOff);
   



}