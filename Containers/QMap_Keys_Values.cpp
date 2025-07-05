#include <QCoreApplication>
#include <QTextStream>
#include <QMap>
#include <QMapIterator>

/*
 * This example demonstrates the use of QMap in Qt6:
 *  - Creating a key-value map
 *  - Inserting new pairs
 *  - Accessing values and keys separately
 *  - Iterating through the map with QMapIterator
 */

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv); // Required for Qt console app

    QTextStream out(stdout);

    // Initialize QMap with some key-value pairs
    QMap<QString, int> items = { {"coins", 5}, {"books", 3} };

    // Insert an additional item into the map
    items.insert("bottles", 7);

    // Extract and print all values
    out << "Values:" << Qt::endl;
    QList<int> values = items.values();
    for (int val : values) {
        out << val << Qt::endl;
    }

    // Extract and print all keys
    out << "Keys:" << Qt::endl;
    QList<QString> keys = items.keys();
    for (const QString &key : keys) {
        out << key << Qt::endl;
    }

    // Iterate through key-value pairs using QMapIterator
    out << "Pairs:" << Qt::endl;
    QMapIterator<QString, int> it(items);
    while (it.hasNext()) {
        it.next();
        out << it.key() << ": " << it.value() << Qt::endl;
    }

    return 0;
}
