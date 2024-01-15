//There are three methods to get the length of a string. The size, the count, and the length method. All do the same thing. They return the number of characters in the specified string.

#include <QTextStream>
#include <QString> // Include for QString

int main() {

  QTextStream out(stdout);

  QString s1 = "Eagle";
  QString s2 = "Eagle\n"; // Includes a newline character
  QString s3 = "Eagle ";  // Includes a trailing space
  QString s4 = "орел";    // A word in Cyrillic characters

  // Output the length of each string
  out << s1.length() << Qt::endl;
  out << s2.length() << Qt::endl;
  out << s3.length() << Qt::endl;
  out << s4.length() << Qt::endl;

  return 0;
}
