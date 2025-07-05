#include "book.h"

/*
 * Constructor for Book class.
 */
Book::Book(QString author, QString title)
    : m_author(std::move(author)), m_title(std::move(title)) {}

/*
 * Returns the author's name.
 */
QString Book::getAuthor() const {
    return m_author;
}

/*
 * Returns the book's title.
 */
QString Book::getTitle() const {
    return m_title;
}
