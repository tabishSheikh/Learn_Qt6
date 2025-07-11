#include <QTextStream>
#include <QFile>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout); // Output stream to console
    QFile file("words.txt"); // File object for reading

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        out << "Cannot open file for reading" << Qt::endl;
        return 1;
    }

    QTextStream in(&file); // Input stream from file

    while (!in.atEnd()) {
        QString line = in.readLine(); // Read one line at a time
        out << line << Qt::endl;
    }

    return 0;
}
