#include <QCoreApplication>
#include <QSet>
#include <QList>
#include <QTextStream>
#include <algorithm>

/*
 * This example demonstrates:
 *  - Creating and using QSet for unique string storage
 *  - Inserting and uniting sets
 *  - Iterating over set values
 *  - Converting QSet to QList for sorting
 */

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv); // Initialize Qt app (console-based)

    QTextStream out(stdout);

    QSet<QString> cols1 = {"yellow", "red", "blue"};
    QSet<QString> cols2 = {"blue", "pink", "orange"};

    out << "There are " << cols1.size() << " values in the set" << Qt::endl;

    cols1.insert("brown");

    out << "After inserting 'brown': " << cols1.size() << " values" << Qt::endl;

    cols1.unite(cols2); // Merge cols2 into cols1

    out << "After uniting with second set: " << cols1.size() << " values" << Qt::endl;

    out << "Unsorted values:" << Qt::endl;
    for (const QString &val : cols1) {
        out << val << Qt::endl;
    }

    // Convert set to list and sort
    QList<QString> sortedList = cols1.values();
    std::sort(sortedList.begin(), sortedList.end());

    out << "*********************" << Qt::endl;
    out << "Sorted values:" << Qt::endl;

    for (const QString &val : sortedList) {
        out << val << Qt::endl;
    }

    return 0;
}
