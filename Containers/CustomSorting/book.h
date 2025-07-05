#ifndef BOOK_H
#define BOOK_H

#include <QString>

/*
 * Book class represents a simple book object with an author and a title.
 */
class Book {

public:
    Book(QString author, QString title);

    QString getAuthor() const;
    QString getTitle() const;

private:
    QString m_author;
    QString m_title;
};

#endif // BOOK_H
