#include "coustomwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CoustomWidget w;
    QObject::connect(&w,SIGNAL(WidgetClicked()),&a,SLOT(quit()));
    w.show();
    return a.exec();
}
