#include<stdio.h>

int main(){
    char ch [10];
    printf("Enter your name:");
    scanf("%s", &ch);
    printf("Hello %s \n", ch);


   int marks;
   printf("Enter marks:");
   scanf("%d", &marks);
   

   if(marks >= 0 && marks <= 30){
    printf("%s \n", ch);
    printf("You are Fail \n");
    printf("Very bad");
   }
   else if(marks > 30 && marks < 40){
    printf("%s \n", ch);
    printf("Your result is: D \n");
    printf("Focus on your study");
   }
   else if(marks > 40 && marks < 50){
    printf("%s \n", ch);
    printf("Your result is: C \n");
    printf("Needs to improve your skill");
   }
   else if(marks > 50 && marks < 60){
    printf("%s \n", ch);
    printf("Your result is: B \n");
    printf("Medium");
   }
   else if(marks > 60 && marks < 70){
    printf("%s \n", ch);
    printf("Your result is: A \n");
    printf("Not bad!");
   }
   else if(marks >70 && marks <= 100){
    printf("%s \n", ch);
    printf("Your result is: A+ \n");
    printf("Congratulations.Good job!");
   }
   else{
    printf("Error!");
   }

    return 0;
}