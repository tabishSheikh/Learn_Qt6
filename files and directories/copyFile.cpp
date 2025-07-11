#include <QTextStream>
#include <QFile>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);

    if (argc != 3) {
        out << "Usage: copyfile <source> <destination>" << Qt::endl;
        return 1;
    }

    QString src = QString::fromLocal8Bit(argv[1]);

    if (!QFile(src).exists()) {
        out << "The source file does not exist" << Qt::endl;
        return 1;
    }

    QString dest = QString::fromLocal8Bit(argv[2]);

    if (!QFile::copy(src, dest)) {
        out << "File could not be copied" << Qt::endl;
        return 1;
    }

    return 0;
}
