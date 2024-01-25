#include <QTextStream>
#include <QDate>

int main() {

    QTextStream out(stdout);

    // Initialize a date
    QDate dt { 2020, 5, 11 };
    // Add 55 days to the date
    QDate nd = dt.addDays(55);

    // Get the current date
    QDate cd = QDate::currentDate();
    // Get the current year
    int year = cd.year();
    // Set a date for Christmas
    QDate xmas { year, 12, 24 };

    // Output the date 55 days from the initial date
    out << "55 days from " << dt.toString() << " is "
        << nd.toString() << Qt::endl;
    // Output the number of days until Christmas
    out << "There are " << cd.daysTo(xmas)
        << " days till Christmas" << Qt::endl;
}
