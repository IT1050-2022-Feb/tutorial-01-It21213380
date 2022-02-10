/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
//Declaring varables
  float num1,total=0;

//Getting input from user
  printf("Enter the distance: ");
  scanf("%f",&num1);

//calculate and print the value
  if(num1<=30)
    {
        total=num1*50;
        printf("Your amount is: %.2f",total);
    }
    else if(num1>30)
    {
        total=(num1-30)*40 +1500;
         printf("Your amount is: %.2f",total);
    }
    
  else{
      printf("Your value is invalid");
  }
  return 0;
}
