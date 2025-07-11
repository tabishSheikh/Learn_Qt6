#include <QTextStream>
#include <QFileInfo>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);

    if (argc != 2) {
        out << "Usage: fileInfo <file>" << Qt::endl;
        return 1;
    }

    QString filename = QString::fromLocal8Bit(argv[1]);
    QFileInfo fileinfo(filename);

    // Extract various file metadata
    QString absPath       = fileinfo.absoluteFilePath();
    QString baseName      = fileinfo.baseName();
    QString compBaseName  = fileinfo.completeBaseName();
    QString fileName      = fileinfo.fileName();
    QString suffix        = fileinfo.suffix();
    QString compSuffix    = fileinfo.completeSuffix();

    // Output the results
    out << "Absolute file path: "    << absPath      << Qt::endl;
    out << "Base name: "             << baseName     << Qt::endl;
    out << "Complete base name: "    << compBaseName << Qt::endl;
    out << "File name: "             << fileName     << Qt::endl;
    out << "Suffix: "                << suffix       << Qt::endl;
    out << "Whole suffix: "          << compSuffix   << Qt::endl;

    return 0;
}
