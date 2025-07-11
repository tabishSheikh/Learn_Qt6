#include <QTextStream>
#include <QDir>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);

    // Output various standard directory paths
    out << "Current path: " << QDir::currentPath() << Qt::endl;
    out << "Home path: "    << QDir::homePath()    << Qt::endl;
    out << "Temporary path: " << QDir::tempPath()  << Qt::endl;
    out << "Root path: "    << QDir::rootPath()    << Qt::endl;

    return 0;
}
