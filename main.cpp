#include "explorer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Explorer w;
    w.show();
    return a.exec();
}
