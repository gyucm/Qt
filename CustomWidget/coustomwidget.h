#ifndef COUSTOMWIDGET_H
#define COUSTOMWIDGET_H

#include <QMessageBox>
#include <QWidget>

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CoustomWidget; }
QT_END_NAMESPACE

class CoustomWidget : public QWidget
{
    Q_OBJECT

public:
    CoustomWidget(QWidget *parent = nullptr);
    ~CoustomWidget();

private:
    Ui::CoustomWidget *ui;

signals:
    void WidgetClicked();//사용자 정의 시그널

public slots:
    void processClick();//사용자 정의 슬롯

};
#endif // COUSTOMWIDGET_H
