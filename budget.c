
// A company organizes events on even days of the month, from day 1 to day 100. 
// The management wants to calculate the total budget allocated for these events. 
// Each even day costs 200 Rs. Write a C program to compute the total budget 
// allocated for all even-day events.


#include <stdio.h>

int main() {
    int startDay = 2;
    int endDay = 100;
    int costPerEvent = 200;
    int totalBudget = 0;


    for (int day = startDay; day <= endDay; day += 2) {
        totalBudget += costPerEvent;     }


    printf("Total budget allocated for even-day events: %d Rs\n", totalBudget);

    return 0;
}
