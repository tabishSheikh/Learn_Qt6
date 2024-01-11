//A QString can be initiated in several ways. Here I have demonstrated five ways of initiating a QString.

#include <QTextStream>
#include <QString>
#include <string>

int main() {

    // QTextStream is used for text input and output
    QTextStream out(stdout);

    // QString can be initialized in multiple ways
    QString str1 = "The night train"; // Direct initialization
    out << str1 << Qt::endl; // Output to console

    QString str2("A yellow rose"); // Initialization with constructor
    out << str2 << Qt::endl; // Output to console

    QString str3 {"An old falcon"}; // Uniform initialization (C++11 style)
    out << str3 << Qt::endl; // Output to console

    // Converting std::string to QString
    std::string s1 = "A blue sky";
    QString str4 = QString::fromStdString(s1); // Using fromStdString() for conversion
    out << str4 << Qt::endl; // Output to console

    std::string s2 = "A thick fog";
    // fromStdString is used for std::string encoded input
    QString str5 = QString::fromStdString(s2);
    out << str5 << Qt::endl; // Output to console

    // Converting C-style string to QString
    char s3[] = "A deep forest";
    QString str6(s3); // Direct initialization
    out << str6 << Qt::endl; // Output to console

    return 0;
}
