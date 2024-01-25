#include <QTextStream>
#include <QTime>
#include <QDate>

int main() {

    QTextStream out(stdout);

    // Get the current date
    QDate cd = QDate::currentDate();
    // Get the current time
    QTime ct = QTime::currentTime();

    // Output the current date using Qt's endl for proper flushing of the output buffer
    out << "Current date is: " << cd.toString() << Qt::endl;
    // Output the current time using Qt's endl for proper flushing of the output buffer
    out << "Current time is: " << ct.toString() << Qt::endl;

    return 0;
}
