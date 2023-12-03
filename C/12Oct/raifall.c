#include <stdio.h>

int main() {
    int days = 7; // 7 days in a week
    double rainfall[days];
    double totalRainfall = 0.0;
    
    printf("Enter the daily rainfall for the week:\n");

    // Input the daily rainfall for each day
    for (int i = 0; i < days; i++) {
        printf("Day %d: ", i + 1);
        scanf("%lf", &rainfall[i]);
        totalRainfall += rainfall[i];
    }

    // Calculate the average rainfall
    double averageRainfall = totalRainfall / days;

    // Display the average rainfall
    printf("Average rainfall for the week: %.2lf inches\n", averageRainfall);

    return 0;
}
