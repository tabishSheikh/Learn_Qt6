#include <QCoreApplication>
#include <QTextStream>
#include <QStringList>
#include <QStringListIterator>

/*
 * This example demonstrates:
 *  - Splitting a comma-separated QString into a QStringList
 *  - Using QStringListIterator to loop through the list
 *  - Trimming whitespace from each item before printing
 */

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv); // Initialize Qt console application

    QTextStream out(stdout);

    // Sample input string with comma-separated items
    QString input = "coin, book, cup, pencil, clock, bookmark";

    // Split the string into a QStringList using ',' as delimiter
    QStringList items = input.split(",");

    // Create an iterator to traverse the list
    QStringListIterator it(items);

    // Print each trimmed item
    while (it.hasNext()) {
        out << it.next().trimmed() << Qt::endl;
    }

    return 0;
}
