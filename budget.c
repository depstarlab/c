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
