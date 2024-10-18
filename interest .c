#include<stdio.h>

int main(){

float principle,Time,Rate,simple_interest;
// Accepting user input
printf("enter principle amount,\n");
scanf("%f",&principle);

printf("enter time(in years):,\n");
scanf("%f",&Time);

printf("enter Rate in interest:,\n");
scanf("%f",&Rate);

//calculating simple interest 
simple_interest=(principle*Rate*Time)/100;

//display results 
printf("The simple interest is:%.2f\n", simple_interest);

 return 0;
}