//Dynamic string building allows us to replace specific control characters with actual values. We use the arg method to do the interpolation.

#include <QTextStream>
#include <QString>

int main() {

   QTextStream out(stdout);

   QString s1 = "There are %1 white roses";
   int n = 12;

   // Replaces %1 with the number of roses and outputs the result
   out << s1.arg(n) << Qt::endl;

   QString s2 = "The tree is %1 m high";
   double h = 5.65;

   // Replaces %1 with the height of the tree and outputs the result
   out << s2.arg(h, 0, 'f', 2) << Qt::endl; // Using 'f' to format the double with 2 decimal places

   QString s3 = "We have %1 lemons and %2 oranges";
   int ln = 12;
   int on = 4;

   // Replaces %1 with the number of lemons and %2 with the number of oranges, then outputs the result
   out << s3.arg(ln).arg(on) << Qt::endl;

   return 0;
}
