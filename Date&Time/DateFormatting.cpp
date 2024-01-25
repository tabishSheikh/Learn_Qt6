#include <QTextStream>
#include <QDate>

int main() {

    QTextStream out(stdout);

    QDate cd = QDate::currentDate();

    out << "Today is " << cd.toString(Qt::TextDate) << Qt::endl;
    out << "Today is " << cd.toString(Qt::ISODate) << Qt::endl;

    // For system locale date formats, use QLocale with QDate::toString().
    QLocale locale = QLocale::system();

    out << "Today is " << locale.toString(cd, QLocale::ShortFormat) << Qt::endl;
    out << "Today is " << locale.toString(cd, QLocale::LongFormat) << Qt::endl;

    return 0;
}
