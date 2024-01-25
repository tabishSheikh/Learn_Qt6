/*
Our planet is a sphere. It revolves round its axis. The Earth rotates towards the east. So the Sun rises at different times in different locations. The Earth rotates once in about 24 hours. Therefore, the world was divided into 24 time zones. In each time zone, there is a different local time. This local time is often further modified by the daylight saving.

There is a pragmatic need for one global time. One global time helps to avoid confusion about time zones and daylight saving time. The UTC (Universal Coordinated time) was chosen to be the primary time standard. UTC is used in aviation, weather forecasts, flight plans, air traffic control clearances, and maps. Unlike local time, UTC does not change with a change of seasons.
*/

#include <QTextStream>
#include <QDateTime>

int main() {

    QTextStream out(stdout);

    // Get the current date and time
    QDateTime cdt = QDateTime::currentDateTime();

    // Convert to UTC and output
    out << "Universal datetime: " << cdt.toUTC().toString() << Qt::endl;
    // Convert to local time and output
    out << "Local datetime: " << cdt.toLocalTime().toString() << Qt::endl;
}



