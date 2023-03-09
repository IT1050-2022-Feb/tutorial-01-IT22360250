/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int m1=0;
  int m2=0;
  int sum=0;
  float avg=0.0;
   
  printf("Enter marks of subject 1 : ");
  scanf("%d",&m1);
  printf("Enter marks of subject 2 : ");
  scanf("%d",&m2);
   
  sum = m1 + m2;
  avg = sum / 2;
   
  printf("sum of two subjects : %d",sum);
  printf("\n");
  printf("average of marks : %.2f",avg);
  printf("\n");
   
  return 0;
}

