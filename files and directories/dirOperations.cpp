#include <QTextStream>
#include <QDir>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);
    QDir dir;

    // Create a single directory
    if (dir.mkdir("mydir")) {
        out << "mydir successfully created" << Qt::endl;
    }

    // Create another directory
    dir.mkdir("mydir2");

    // Rename "mydir2" to "newdir" if it exists
    if (dir.exists("mydir2")) {
        dir.rename("mydir2", "newdir");
    }

    // Create nested directory structure: temp/newdir
    dir.mkpath("temp/newdir");

    return 0;
}
