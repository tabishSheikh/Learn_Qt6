#include <QTextStream>
#include <QDate>

int main() {

    QTextStream out(stdout);

    // Initialize two QDate objects
    QDate dt1 { 2020, 4, 5 };
    QDate dt2 { 2019, 4, 5 };

    // Compare the two dates and output which one comes before the other
    if (dt1 < dt2) {
        out << dt1.toString() << " comes before "
            << dt2.toString() << Qt::endl;
    } else {
        out << dt1.toString() << " comes after "
            << dt2.toString() << Qt::endl;
    }
}

