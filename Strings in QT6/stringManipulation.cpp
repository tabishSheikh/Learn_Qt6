//In the code example, we initiate a QString. We append and prepend some additional text. We print the length of the string. Finally, we print the modified string in upper and lower case.


#include <QTextStream> // Include QTextStream for text I/O
#include <QString>     // Include QString for string manipulation

int main() {
    QTextStream out(stdout); // Create a QTextStream object linked to the console for output

    QString a { "love" };    // Initialize a QString object 'a' with the value "love"
    a.append(" chess");      // Append the string " chess" to 'a', making it "love chess"
    a.prepend("I ");         // Prepend the string "I " to 'a', changing it to "I love chess"

    out << a << Qt::endl;    // Output the modified string 'a' to the console
    // Output the character count of string 'a' using 'count()' method
    out << "The a string has " << a.count() << " characters" << Qt::endl;
    out << a.toUpper() << Qt::endl; // Convert 'a' to uppercase and output it
    out << a.toLower() << Qt::endl; // Convert 'a' to lowercase and output it

    return 0; 
}

