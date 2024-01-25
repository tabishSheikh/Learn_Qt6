#include <QTextStream>
#include <QDate>
#include <QList> // Necessary for QList

int main() {

    QTextStream out(stdout);

    QList<QDate> dates {
        QDate(2020, 5, 11), // Valid date
        QDate(2020, 8, 1),  // Valid date
        QDate(2020, 2, 30)  // Invalid date, February doesn't have 30 days
    };

    for (int i = 0; i < dates.size(); ++i) {

        if (dates.at(i).isValid()) {
            out << "Date " << i + 1 << " is a valid date" << Qt::endl;
        } else {
            out << "Date " << i + 1 << " is not a valid date" << Qt::endl;
        }
    }

    return 0;
}
