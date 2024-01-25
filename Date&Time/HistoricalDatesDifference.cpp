#include <QTextStream>
#include <QDate>

int main() {

   QTextStream out(stdout);

   // Define dates for the battles of Borodino and Slavkov (Austerlitz)
   QDate bordate(1812, 9, 7);
   QDate slavdate(1805, 12, 2);

   // Get the current date
   QDate cd = QDate::currentDate();

   // Calculate Julian day numbers
   int j_today = cd.toJulianDay();
   int j_borodino = bordate.toJulianDay();
   int j_slavkov = slavdate.toJulianDay();

   // Output the number of days since these battles
   out << "Days since Slavkov battle: " << j_today - j_slavkov << Qt::endl;
   out << "Days since Borodino battle: " << j_today - j_borodino << Qt::endl;
}
