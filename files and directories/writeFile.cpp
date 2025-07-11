#include <QTextStream>
#include <QFile>
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    QTextStream out(stdout); // Console output

    QString filename = "distros.txt";
    QFile file(filename);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream fout(&file); // File output stream
        fout << "Xubuntu" << Qt::endl;
        fout << "Arch" << Qt::endl;
        fout << "Debian" << Qt::endl;
        fout << "Redhat" << Qt::endl;
        fout << "Slackware" << Qt::endl;
    } else {
        out << "Could not open file" << Qt::endl;
    }

    return 0;
}
