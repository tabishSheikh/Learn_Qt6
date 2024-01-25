/*
A date can be represented in a variety of other formats. In Qt5 we can create our custom date formats, too. Another version of the toString method takes a format string where we can use various format specifiers. For example the d specifier stands for a day as a number without a leading zero. The dd specifier stands for a day as a number with a leading zero. The following table lists available date format expressions:

Expression	Output
d	          The day as a number without a leading zero (1 to 31)
dd	        The day as a number with a leading zero (01 to 31)
ddd	        The abbreviated localized day name (e.g. 'Mon' to 'Sun'). Uses QDate::shortDayName.
dddd	      The long localized day name (e.g. 'Monday' to 'Sunday'). Uses QDate::longDayName.
M	          The month as a number without a leading zero (1 to 12)
MM	        The month as a number with a leading zero (01 to 12)
MMM	        The abbreviated localized month name (e.g. 'Jan' to 'Dec'). Uses QDate::shortMonthName.
MMMM	      The long localized month name (e.g. 'January' to 'December'). Uses QDate::longMonthName.
yy	        The year as two digit number (00 to 99)
yyyy	      The year as four digit number. If the year is negative, a minus sign is prepended in addition.
*/

#include <QTextStream>
#include <QDate>

int main() {

    QTextStream out(stdout);

    // Get the current date
    QDate cd = QDate::currentDate();

    // Output the current date in various formats
    out << "Today is " << cd.toString("yyyy-MM-dd") << Qt::endl;
    out << "Today is " << cd.toString("yy/M/dd") << Qt::endl;
    out << "Today is " << cd.toString("d. M. yyyy") << Qt::endl;
    out << "Today is " << cd.toString("d-MMMM-yyyy") << Qt::endl;

    return 0;
}
