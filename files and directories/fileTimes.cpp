#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);

    if (argc != 2) {
        out << "Usage: file_times <file>" << Qt::endl;
        return 1;
    }

    QString filename = QString::fromLocal8Bit(argv[1]);
    QFileInfo fileinfo(filename); // Access file metadata

    // Get the last read and last modified timestamps
    QDateTime lastRead = fileinfo.lastRead();
    QDateTime lastModified = fileinfo.lastModified();

    // Output the timestamps in readable format
    out << "Last read: " << lastRead.toString() << Qt::endl;
    out << "Last modified: " << lastModified.toString() << Qt::endl;

    return 0;
}
