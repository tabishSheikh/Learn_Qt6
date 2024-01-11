#include <QTextStream>
#include <QString>

int main() {

    QTextStream out(stdout);

    // Initialize a QString with the value "Eagle"
    QString a { "Eagle" };

    // Output the first character of the QString, which is 'E'
    out << a[0] << Qt::endl;
    // Output the fifth character of the QString, which is 'e'
    out << a[4] << Qt::endl;

    // The 'at' method performs bounds checking, output the first character again
    out << a.at(0) << Qt::endl;

    // Check if the character at the sixth position is null (outside the range of the string)
    if (a.at(5).isNull()) {
        out << "Outside the range of the string" << Qt::endl;
    }

    return 0;
}
