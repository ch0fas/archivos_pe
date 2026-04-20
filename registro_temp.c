#include <stdio.h>

typedef struct
{
    int day;
    float temperature;
} Registry;

float avg_temp(Registry week[])
{
    int num_of_days = sizeof(week) / sizeof(week[0]);
    float temp_total = 0;
    for (int i = 0; i < num_of_days; i++)
    {
        temp_total += week[i].temperature;
    }
    return temp_total/num_of_days;
}

int main()
{
    Registry week[7];
    // Assigning values
    week[0].day = 20; week[0].temperature = 30;
    week[1].day = 21; week[1].temperature = 31;
    week[2].day = 22; week[2].temperature = 28;
    week[3].day = 23; week[3].temperature = 30;
    week[4].day = 24; week[4].temperature = 32;
    week[5].day = 25; week[5].temperature = 31;
    week[6].day = 26; week[6].temperature = 30;

    printf("The average temperature for this week was %.2f", avg_temp(week));
    return 0;
}
