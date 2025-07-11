#include <QTextStream>
#include <QFileInfo>
#include <QDir>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);

    if (argc != 2) {
        out << "Usage: list_dir <directory>" << Qt::endl;
        return 1;
    }

    QString directory = QString::fromLocal8Bit(argv[1]);
    QDir dir(directory);

    if (!dir.exists()) {
        out << "The directory does not exist" << Qt::endl;
        return 1;
    }

    // Filter to include files and directories, and sort by size descending
    dir.setFilter(QDir::Files | QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);

    QFileInfoList list = dir.entryInfoList();

    // Find the longest filename for aligned output formatting
    int maxSize = 0;
    for (const QFileInfo &finfo : list) {
        int nameLength = finfo.fileName().size();
        if (nameLength > maxSize)
            maxSize = nameLength;
    }

    int len = maxSize + 2;

    // Header
    out << QString("Filename").leftJustified(len).append("Bytes") << Qt::endl;

    // Print filename and file size
    for (const QFileInfo &fileInfo : list) {
        QString line = fileInfo.fileName().leftJustified(len);
        line.append(QString::number(fileInfo.size()));
        out << line << Qt::endl;
    }

    return 0;
}
