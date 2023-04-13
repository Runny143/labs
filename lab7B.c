#include <stdio.h>
char grade(float x);
char grade(float x){
    char ak = 'o';
    if (x >= 70){
        return 'A';
    }
    else if( x >= 60 && x <= 69){
        return'B';
    }
     else if( x >= 50 && x <= 59){
        return'C';
    }
     else if( x >= 40 && x <= 499){
        return'D';
    }
     else if( x > 39 && x>0){
        return'F';
    }
    return ak;
}

int main(){
    float weightedsum =0.0,totalcredits=0.0;
   
float studentResults[7][2] = {3,57.7,2,69.29,2,71.32,4,65.05,3,75.67,3,48.65,1,88.21};
printf("\nCREDIT\t|SCORE\t|GRADE\t|\n");
 printf("\t|\t|\t|\n");
 for(int i=0; i<7; ++i){
 for(int j=0; j<2; ++j){
 printf("%.2f \t|", studentResults[i][j]);
 if(j%2 == 1){ 
 printf("%c \t|", grade(studentResults[i][j]));
 printf("\n\t|\t|\t|");
 }
 }
 printf("\n");
 }
 for(int i=0; i<7; ++i){
 weightedsum = weightedsum + (studentResults[i][0] * studentResults[i][1]);
 totalcredits += studentResults[i][0];
 }
 float cwa = weightedsum/totalcredits;
 printf("\ncwa = %.2f\n", cwa);

}