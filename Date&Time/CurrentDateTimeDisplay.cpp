#include <QTextStream>
#include <QDateTime>

int main() {

   QTextStream out(stdout);

   // Get the current date and time
   QDateTime cdt = QDateTime::currentDateTime();

   // Output the current date and time
   out << "The current datetime is " << cdt.toString() << Qt::endl;
   // Output the current date
   out << "The current date is " << cdt.date().toString() << Qt::endl;
   // Output the current time
   out << "The current time is " << cdt.time().toString() << Qt::endl;
}
