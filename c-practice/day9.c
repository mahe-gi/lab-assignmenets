
#include <stdio.h>
void celsiustofah();
void babyage();
int main()
{
    // celsiustofah();
    // babyage();
}

// Multiply the °C temperature by 1.8. Add 32 to this number.

// 1.Celsius to Fahrenheit conversion
//     Eg : 32 Celsius is 98.60

void celsiustofah()
{

    float celcius = 0;
    printf("enter celcius :");
    scanf("%f", &celcius);
    printf("%.0f\u00B0  Celsius is %.2f\u00B0\n", celcius, (celcius * 1.8) + 32);
}

/* 2.Read a baby age in days and find the baby age,in years,months, weeks and days.Eg : input  totaldays = 500 Output  Baby age 1 year 4 months 2 weeks 1 day */

void babyage()
{

    int days = 0;
    printf("enter days: ");
    scanf("%d", &days);
    printf("Baby age %d year %d months %d weeks %d day\n", days / 365, (days % 365) / 30, ((days % 365) % 30) / 7, ((days % 365) % 30) % 7);
}