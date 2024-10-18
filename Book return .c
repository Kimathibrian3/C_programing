#include <stdio.h>

int main() {
    int bookID, due_date, returndate, Days_overdue;
    float fine_Rate, fine_Amount;


    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as an integer ): ");
    scanf("%d", &due_date);
    printf("Enter Return Date (as an integer ): ");
    scanf("%d", &returndate);

  
    Days_overdue = returndate - due_date;

    if (Days_overdue <= 7) {
        fine_Rate = 20.0;
    } else if (Days_overdue <= 14) {
        fine_Rate = 50.0;
    } else {
        fine_Rate = 100.0;
    }

 
    fine_Amount = fine_Rate * Days_overdue;
  
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", due_date);
    printf("Return Date: %d\n", returndate);
    printf("Days Overdue: %d\n", Days_overdue);
    printf("Fine Rate: Ksh. %.2f per day\n", fine_Rate);
    printf("Total Fine Amount: Ksh. %.2f\n", fine_Amount);

    return 0;
}