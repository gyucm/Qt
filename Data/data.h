#ifndef DATA_H
#define DATA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Data; }
QT_END_NAMESPACE

class Data : public QWidget
{
    Q_OBJECT

public:
    Data(QWidget *parent = nullptr);
    ~Data();

private:
    Ui::Data *ui;
};
#endif // DATA_H
