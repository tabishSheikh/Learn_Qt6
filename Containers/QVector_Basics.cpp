#include <QCoreApplication>
#include <QVector>
#include <QTextStream>

/*
 * This example demonstrates basic usage of QVector in Qt6.
 * It covers:
 *  - Initialization
 *  - Accessing first and last elements
 *  - Appending and prepending elements
 *  - Iterating with range-based for loop
 */

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv); // Required for proper Qt app initialization

    QTextStream out(stdout); // Stream for printing to console

    QVector<int> vals = {1, 2, 3, 4, 5}; // Initialize QVector with integers

    out << "The size of the vector is: " << vals.size() << Qt::endl;
    out << "The first item is: " << vals.first() << Qt::endl;
    out << "The last item is: " << vals.last() << Qt::endl;

    vals.append(6);   // Adds element to the end
    vals.prepend(0);  // Adds element to the beginning

    out << "Elements: ";
    for (int val : vals) {
        out << val << " ";
    }

    out << Qt::endl;

    return 0;
}
