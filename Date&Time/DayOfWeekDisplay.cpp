#include <QTextStream>
#include <QDate>
#include <QLocale> // Include for QLocale

int main() {

   QTextStream out(stdout);

   // Get the current date
   QDate cd = QDate::currentDate();
   // Get the day of the week as an integer
   int wd = cd.dayOfWeek();

   // Create a QLocale object for US English
   QLocale locale(QLocale("en_US"));

   // Output the current day of the week in long and short formats
   out << "Today is " << locale.dayName(wd) << Qt::endl;
   out << "Today is " << locale.dayName(wd, QLocale::ShortFormat) << Qt::endl;

   return 0;
}
