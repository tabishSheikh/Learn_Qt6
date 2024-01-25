#include <QTextStream>
#include <QDate>
#include <QTime>

int main() {

   QTextStream out(stdout);

   // Initialize a QDate object with a specific date
   QDate dt1 { 2020, 4, 12 };
   // Output the date in the default format
   out << "The date is " << dt1.toString() << Qt::endl;

   // Create a QDate object and set a specific date
   QDate dt2;
   dt2.setDate(2020, 3, 3);
   // Output the date in the default format
   out << "The date is " << dt2.toString() << Qt::endl;

   // Initialize a QTime object with a specific time
   QTime tm1 { 17, 30, 12, 55 };
   // Output the time in a custom format
   out << "The time is " << tm1.toString("hh:mm:ss.zzz") << Qt::endl;

   // Create a QTime object and set a specific time
   QTime tm2;
   tm2.setHMS(13, 52, 45, 155);
   // Output the time in a custom format
   out << "The time is " << tm2.toString("hh:mm:ss.zzz") << Qt::endl;

   return 0;
}
