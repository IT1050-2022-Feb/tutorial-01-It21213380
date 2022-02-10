/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  //Declaring variables
  float num1,num2,total=0,avg=0;

//Getting marks from user
  printf("Enter your subject 1 mark: \n");
  scanf("%f",&num1);

  printf("Enter your subject 2 mark: \n");
  scanf("%f",&num2);

//calculating the total
  total=num1+num2;

//calculating the average
  avg=total/2;


  printf("Your average mark is: %2.f",avg);

  return 0;
}

