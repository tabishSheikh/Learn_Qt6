#include <QTextStream>
#include <QFile>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);

    if (argc != 2) {
        out << "Usage: permissions <file>" << Qt::endl;
        return 1;
    }

    QString filename = QString::fromLocal8Bit(argv[1]);

    // Get permission flags for the file
    QFile::Permissions ps = QFile::permissions(filename);

    QString fper;

    // Owner permissions
    fper.append(ps & QFile::ReadOwner  ? 'r' : '-');
    fper.append(ps & QFile::WriteOwner ? 'w' : '-');
    fper.append(ps & QFile::ExeOwner   ? 'x' : '-');

    // Group permissions
    fper.append(ps & QFile::ReadGroup  ? 'r' : '-');
    fper.append(ps & QFile::WriteGroup ? 'w' : '-');
    fper.append(ps & QFile::ExeGroup   ? 'x' : '-');

    // Other permissions
    fper.append(ps & QFile::ReadOther  ? 'r' : '-');
    fper.append(ps & QFile::WriteOther ? 'w' : '-');
    fper.append(ps & QFile::ExeOther   ? 'x' : '-');

    out << fper << Qt::endl;

    return 0;
}
