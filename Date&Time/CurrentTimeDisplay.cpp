/*
Qt5 custom time formats
We can create additional time formats. We build a custom time format where we use time format specifiers. The following table gives a list of available format expressions.


Expression	Output
h	          the hour without a leading zero (0 to 23 or 1 to 12 if AM/PM display)
hh	        the hour with a leading zero (00 to 23 or 01 to 12 if AM/PM display)
H	          the hour without a leading zero (0 to 23, even with AM/PM display)
HH	        the hour with a leading zero (00 to 23, even with AM/PM display)
m	          the minute without a leading zero (0 to 59)
mm	        the minute with a leading zero (00 to 59)
s	          the second without a leading zero (0 to 59)
ss	        the second with a leading zero (00 to 59)
z	          the milliseconds without leading zeroes (0 to 999)
zzz	        the milliseconds with leading zeroes (000 to 999)
t	          the timezone (for example "CEST")

AP or A	use AM/PM display. AP will be replaced by either "AM" or "PM".
ap or a	use am/pm display. ap will be replaced by either "am" or "pm".
*/

#include <QTextStream>
#include <QTime>

int main() {

   QTextStream out(stdout);

   // Get the current time
   QTime ct = QTime::currentTime();

   // Output the current time in various custom formats
   out << "The time is " << ct.toString("hh:mm:ss.zzz") << Qt::endl;
   out << "The time is " << ct.toString("h:m:s a") << Qt::endl;
   out << "The time is " << ct.toString("H:m:s A") << Qt::endl;
   out << "The time is " << ct.toString("h:m AP") << Qt::endl;

   return 0;
}
