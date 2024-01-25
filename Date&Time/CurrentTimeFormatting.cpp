#include <QTextStream>
#include <QTime>

int main() {

   QTextStream out(stdout);

   // Get the current time
   QTime ct = QTime::currentTime();

   // Output the current time in various formats using valid format strings
   out << "The time is " << ct.toString("hh:mm:ss") << Qt::endl;
   out << "The time is " << ct.toString("HH:mm:ss.zzz") << Qt::endl;
   out << "The time is " << ct.toString("hh:mm:ss AP") << Qt::endl;

   return 0;
}
