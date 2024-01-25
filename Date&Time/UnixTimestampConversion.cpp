/*
An epoch is an instant in time chosen as the origin of a particular era. For example in western Christian countries the time epoch starts from day 0, when Jesus was born. Another example is the French Republican Calendar which was used for twelve years. The epoch was the beginning of the Republican Era which was proclaimed on September 22, 1792, the day the First Republic was declared and the monarchy abolished.

Computers have their epochs too. One of the most popular is the Unix epoch. The Unix epoch is the time 00:00:00 UTC on 1 January 1970 (or 1970-01-01T00:00:00Z ISO 8601). The date and time in a computer is determined according to the number of seconds or clock ticks that have elapsed since the defined epoch for that computer or platform.

Unix time is the number of seconds elapsed since Unix epoch.

$ date +%s
1606995554
Unix date command can be used to get the Unix time. At this particular moment, 1606995554 seconds have passed since the Unix epoch.
*/
#include <QTextStream>
#include <QDateTime>
#include <ctime>

int main() {

  QTextStream out(stdout);

  // Get the current time as a Unix timestamp
  time_t t = time(0);
  out << t << Qt::endl;

  // Convert the Unix timestamp to QDateTime
  QDateTime dt;
  dt.setSecsSinceEpoch(static_cast<qint64>(t));
  out << dt.toString() << Qt::endl;

  // Get the current date and time, and convert to Unix timestamp
  QDateTime cd = QDateTime::currentDateTime();
  out << cd.toSecsSinceEpoch() << Qt::endl;
}
