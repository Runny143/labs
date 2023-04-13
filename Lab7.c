#include <stdio.h>
int main(){
    int numberOfstudents;
    float sum =0;
    printf("What is The Number Of students in The Class?\n");
    scanf(" %d", &numberOfstudents);
    float marks[100];
    printf("Start entering their marks");
    for(int i=0; i< numberOfstudents; ++i){
    printf("\nStudent %d:\t",i+1);
    scanf("%f", &marks[i]);
    sum += marks[i];
    }
    for(int i = 0;i<numberOfstudents; ++i){
     printf(" Marks of Students Are\n");
     printf(" Students %i: %f\n",i+1,marks[i]);
    }

 float meanMark = sum/numberOfstudents;
 printf(" Meanmark of Students %.2f\n", meanMark);

 float temp = 0;
 printf("Your orderedMarks are\n");
 for(int i=0; i<numberOfstudents; ++i){
 for(int j=i+1; j<numberOfstudents; ++j){
 if(marks[i] > marks[j]){
 //switch positions
 temp = marks[i];
 marks[i] = marks[j];
 marks[j] = temp;
 }
 }
 
printf(" %f\n", marks[i]);
}
}

    