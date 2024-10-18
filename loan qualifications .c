#include <stdio.h>

int main() {
    int age;
    double annual_income;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);  

    // Prompt user for annual income 
    printf("Enter your annual income: ");
    scanf("%lf", &annual_income);  

    // Check loan qualification 
    if (age >= 21 ){
    if(annual_income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else if (age < 21) {
        printf("Sorry, you don't qualify for a loan due to age.\n");
    } else if (annual_income < 21000) {
        printf("Sorry, you don't qualify for a loan due to income.\n");
    } else {
        printf("Sorry, we are unable to offer you a loan at the moment.\n");
    }

    return 0;
}
}