/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() {
//Declaring the variables
 int i,num1,sum=0;


//Getting input from user
  printf("Enter an integer number: ");
  scanf("%d",&num1);
  
  for(i=1;i<=num1;i++)
  {
      sum = sum+i;
  }

//print the results
  printf ("Sum of the %d numbers: %d\n",num1,sum);
  
  return 0;
}
