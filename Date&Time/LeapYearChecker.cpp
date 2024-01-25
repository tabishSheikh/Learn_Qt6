/*
A leap year is a year containing an additional day. The reason for an extra day in the calendar is the difference between the astronomical and the calendar year. The calendar year has exactly 365 days, while the astronomical year, the time for the earth to make one revolution around the Sun, is 365.25 days.

The difference is 6 hours which means that in four years time we are missing one day. Because we want to have our calendar synchronised with the seasons, we add one day to February each four years. (There are exceptions.) In the Gregorian calendar, February in a leap year has 29 days instead of the usual 28. And the year lasts 366 days instead of the usual 365.
*/

#include <QTextStream>
#include <QDate>
#include <QList> // Include for QList

int main() {

   QTextStream out(stdout);

   // List of years to check for leap years
   QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016, 2020, 2024});

   // Iterate over each year and check if it is a leap year
   for (int year: years) {
       if (QDate::isLeapYear(year)) {
           out << year << " is a leap year" << Qt::endl;
       } else {
           out << year << " is not a leap year" << Qt::endl;
       }
   }
}
