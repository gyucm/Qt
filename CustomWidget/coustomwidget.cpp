#include "coustomwidget.h"
#include "ui_coustomwidget.h"

CoustomWidget::CoustomWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CoustomWidget)
{
    ui->setupUi(this);
    ui->Button->resize(120,120);
    this->move(100,100);
    connect(ui->Button, SIGNAL(clicked()), this, SLOT(processClick()));
}
void CoustomWidget::processClick()
{
    QMessageBox::information(this,"Q","버튼 눌림");
    emit WidgetClicked();
    //qApp->quit();//a의 주소
}
CoustomWidget::~CoustomWidget()
{
    delete ui;
}

