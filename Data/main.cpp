#include "data.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Data w;
    w.show();
    return a.exec();
}
