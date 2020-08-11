// This program calculates the amount of time John and Bill worked together
// based on the amount of days, hours, and minutes each one worked alone.
#include <iostream>
using namespace std;

static const int HOURS_IN_A_DAY = 24;
static const int MINUTES_IN_AN_HOUR = 60;


int main (){
    int daysJohnHasWorked;
    int hoursJohnHasWorked;
    int minutesJohnHasWorked;

    int daysBillHasWorked;
    int hoursBillHasWorked;
    int minutesBillHasWorked;

    int totalHoursWorked;
    int totalDaysWorked;
    int totalMinutesWorked;

    //These variables will hold time that needs to be rolled over into whole days and hours
    int excessDays;
    int excessHours;
    int excessMinutes;
    int excessMinutesIntoHours;

    cout << "Please enter the number of days John has worked: ";
    cin >> daysJohnHasWorked;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hoursJohnHasWorked;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minutesJohnHasWorked;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> daysBillHasWorked;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hoursBillHasWorked;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minutesBillHasWorked;

    //Calculate hours in excess of 24 and calculate days from those hours
    excessMinutes = (minutesBillHasWorked + minutesJohnHasWorked) % MINUTES_IN_AN_HOUR;
    excessMinutesIntoHours = (minutesBillHasWorked + minutesJohnHasWorked) / MINUTES_IN_AN_HOUR;
    excessHours = (hoursJohnHasWorked + hoursBillHasWorked + excessMinutesIntoHours) % HOURS_IN_A_DAY;
    excessDays = (hoursJohnHasWorked + hoursBillHasWorked + excessMinutesIntoHours) / HOURS_IN_A_DAY;

    //Calculate total days, hours, and minutes worked between John and Bill
    totalDaysWorked = daysJohnHasWorked + daysBillHasWorked + excessDays;
    totalHoursWorked = excessHours;
    totalMinutesWorked = excessMinutes;

    cout << "The total time they worked together is " << totalDaysWorked << " days, " << totalHoursWorked << " hours and " << totalMinutesWorked << " minutes.";

    return 0;
}