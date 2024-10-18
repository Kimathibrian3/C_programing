/*
Author Brian kimathi 
Reg CT102/G/23094/24
Date 2024/10/5
*/
#include<stdio.h>

int main(){

float principle,Time,Rate, compound_interest;
// Accepting user input
printf("enter principle amount,\n");
scanf("%f",&principle);

printf("enter time(in years):,\n");
scanf("%f",&Time);

printf("enter Rate in interest:,\n");
scanf("%f",&Rate);

//calculating compound interest 
compound_interest=principle*((1+Rate/100)*Time);

//display results 
printf("The compound interest is:%.2f\n", compound_interest);

 return 0;
}
