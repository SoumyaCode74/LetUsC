#include "ProbC_1.h"

Date_Of_Joining dates[NO_OF_EMPLOYEES];

int main(void)
{
    for(int i = 0; i < NO_OF_EMPLOYEES; i++)
    {
        unsigned int day = 0;
        unsigned int month = 0;
        unsigned int year = 0;
        printf("Enter day for employee %d: \n", (i+1));
        scanf("%d", &day);
        printf("Enter month for employee %d: \n", (i+1));
        scanf("%d", &month);
        printf("Enter year for employee %d: \n", (i+1));
        scanf("%d", &year);        
        dates[i].day = day;
        dates[i].month = month;
        dates[i].year = year;
        printf("Employee %d joining date: %d/%d/%d\n", (i+1), dates[i].day,dates[i].month,dates[i].year);
    }
    return 0;
}