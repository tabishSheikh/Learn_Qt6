#include <QCoreApplication>
#include <QTextStream>
#include <QList>
#include <algorithm>
#include "book.h"

/*
 * Comparison function used to sort books by title.
 */
bool compareByTitle(const Book &b1, const Book &b2) {
    return b1.getTitle() < b2.getTitle();
}

int main(int argc, char *argv[]) {

    QCoreApplication app(argc, argv);
    QTextStream out(stdout);

    // List of books
    QList<Book> books = {
        Book("Jack London", "The Call of the Wild"),
        Book("Honoré de Balzac", "Father Goriot"),
        Book("Leo Tolstoy", "War and Peace"),
        Book("Gustave Flaubert", "Sentimental Education"),
        Book("Guy de Maupassant", "Une Vie"),
        Book("William Shakespeare", "Hamlet")
    };

    // Sort the list using std::sort and the custom comparator
    std::sort(books.begin(), books.end(), compareByTitle);

    // Output the sorted books
    for (const Book &book : books) {
        out << book.getAuthor() << ": " << book.getTitle() << Qt::endl;
    }

    return 0;
}
