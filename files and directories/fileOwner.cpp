#include <QTextStream>
#include <QFileInfo>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout); // Output stream for console

    if (argc != 2) {
        out << "Usage: owner <file>" << Qt::endl;
        return 1;
    }

    QString filename = QString::fromLocal8Bit(argv[1]);
    QFileInfo fileinfo(filename); // Provides metadata about the file

    // Retrieve owner and group names
    QString group = fileinfo.group();
    QString owner = fileinfo.owner();

    // Print group and owner to the console
    out << "Group: " << group << Qt::endl;
    out << "Owner: " << owner << Qt::endl;

    return 0;
}
