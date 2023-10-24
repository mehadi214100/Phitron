#include <stdio.h>

int main() {
    // Define the total semester fee and the amount already paid
    double totalFee = 50000.0;
    double amountPaid = 12000.0;

    // Calculate the amount of money paid at 50%
    double amountAt50Percent = totalFee * 0.5;

    // Calculate the amount you'll get on a 15% waiver if paid before the mid-term
    double waiverAmount = totalFee * 0.15;

    // Calculate the remaining amount to pay
    double remainingAmount = totalFee - amountPaid;

    printf("Total amount you have to pay for this semester: %.2lf\n", totalFee);
    printf("Current amount you have already paid: %.2lf\n", amountPaid);
    printf("Remaining amount that you need to pay: %.2lf\n", remainingAmount);
    printf("Amount of money in 50%%: %.2lf\n", amountAt50Percent);
    printf("Amount that you'll get on 15%% waiver if paid before Mid-term: %.2lf\n", waiverAmount);
    printf("Amount that you have remaining to pay: %.2lf\n", remainingAmount);

    return 0;
}
