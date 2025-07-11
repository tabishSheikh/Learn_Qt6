// This example demonstrates how to get the size of a file using Qt6's QFileInfo class.

#include <QTextStream>   // For reading/writing to console
#include <QFileInfo>     // Provides information about files and directories
#include <QFile>         // To verify file existence
#include <QCoreApplication> // Needed in Qt6 for console apps

int main(int argc, char *argv[]) {
    // QCoreApplication is used for non-GUI applications in Qt6
    QCoreApplication app(argc, argv);

    QTextStream out(stdout); // Stream to print to console (stdout)

    // Check if the user has passed exactly one argument (filename)
    if (argc != 2) {
        // Print usage instructions using QTextStream instead of qWarning for consistency
        out << "Usage: file_size <filename>" << Qt::endl;
        return 1;
    }

    // Get the filename from command line arguments
    QString filename = QString::fromLocal8Bit(argv[1]);

    QFile file(filename); // Create QFile to check if the file exists

    if (!file.exists()) {
        out << "The file does not exist." << Qt::endl;
        return 1;
    }

    // QFileInfo provides metadata about the file
    QFileInfo fileinfo(filename);

    // Retrieve file size in bytes
    qint64 size = fileinfo.size();

    // Format the output

