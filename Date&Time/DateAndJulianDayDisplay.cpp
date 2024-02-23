/*
A Julian day refers to a continuous count of days since the beginning of the Julian Period. It is used primarily by astronomers. It should not be confused with the Julian calendar. The Julian Period started in 4713 BC. The Julian day number 0 is assigned to the day starting at noon on January 1, 4713 BC. The Julian Day Number (JDN) is the number of days elapsed since the beginning of this period. The Julian Date (JD) of any instant is the Julian day number for the preceding noon plus the fraction of the day since that instant. (Qt6 does not compute this fraction.) Apart from astronomy, Julian dates are often used by military and mainframe programs.
*/


#include <QTextStream>
#include <QDate>

int main() {

    QTextStream out(stdout);

    // Get the current date
    QDate cd = QDate::currentDate();

    // Output the Gregorian date in ISO format
    out << "Gregorian date for today: " << cd.toString(Qt::ISODate) << Qt::endl;
    // Output the Julian day number
    out << "Julian day for today: " << cd.toJulianDay() << Qt::endl;
}
