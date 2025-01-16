#include<stdio.h>

int main(){
   int marks;
   printf("Enter marks:");
   scanf("%d", &marks);
   

   if(marks >= 0 && marks <= 30){
    printf("Fail \n");
    printf("Very bad");
   }
   else if(marks > 30 && marks < 40){
    printf("D \n");
    printf("Focus on your study");
   }
   else if(marks > 40 && marks < 50){
    printf("C \n");
    printf("Needs to improve your skill");
   }
   else if(marks > 50 && marks < 60){
    printf("B \n");
    printf("Medium");
   }
   else if(marks > 60 && marks < 70){
    printf("A \n");
    printf("Not bad!");
   }
   else if(marks >70 && marks <= 100){
    printf("A+ \n");
    printf("Congratulations.Good job!");
   }
   else{
    printf("Error!");
   }

    return 0;
}