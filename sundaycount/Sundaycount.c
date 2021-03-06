#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

    int dayofmonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int dayinweek = 1, year, month, day = 0,n;
    scanf("%d",&n);
    for (month = 1; month <= 12; month++) {
        dayinweek += (dayofmonth[month - 1] % 7);
        if (dayinweek > 7) {
            dayinweek = dayinweek % 7;
        }
    }
    for (year = 1901; year <= 2000; year++) {
        if ((year % 400 == 0 && year % 100 == 0) || (year % 4 == 0)) {
            dayofmonth[1] = 29;
        }
        else {
            dayofmonth[1] = 28;
        }
        for (month = 1; month <= 12; month++) {
            dayinweek += (dayofmonth[month - 1] % 7);
            if (dayinweek > 7) {
                dayinweek = dayinweek % 7;
            }
            if (dayinweek == n) {
                day++;
            }
        }
    }
    printf("%d",day);
}