#include <QCoreApplication>
#include <QTextStream>
#include <QList>
#include <algorithm>

/*
 * This example demonstrates using QList in Qt6:
 *  - Creating a list of QStrings
 *  - Accessing elements using .at()
 *  - Appending multiple elements with << operator
 *  - Sorting the list using std::sort
 */

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv); // Initialize Qt application

    QTextStream out(stdout);

    // Initialize QList with string values
    QList<QString> authors = {"Balzac", "Tolstoy", "Gulbranssen", "London"};

    // Print original list
    for (int i = 0; i < authors.size(); ++i) {
        out << authors.at(i) << Qt::endl;
    }

    // Append more items using operator<<
    authors << "Galsworthy" << "Sienkiewicz";

    out << "***********************" << Qt::endl;

    // Sort the list using std::sort and QList iterators
    std::sort(authors.begin(), authors.end());

    // Output sorted list
    out << "Sorted:" << Qt::endl;
    for (const QString &author : authors) {
        out << author << Qt::endl;
    }

    return 0;
}
