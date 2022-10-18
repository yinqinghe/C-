#include "widget.h"
#include<qpushbutton.h>
#include"swidget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    this->resize(800, 600);
    this->setWindowTitle("��¼");

    //����һ����ѯ����
    SWidget* s = new SWidget();
    
    //����һ����һҳ�İ�ť
    QPushButton* btn = new QPushButton("��һҳ", this);
    connect(btn, &QPushButton::clicked, [=]() {
        //��ǰ��������
        this->hide();
        //��ѯ������ʾ
        s->show();
        });

    //����ѯ����s�Ļ����ź�
    connect(s, &SWidget::back, [=]() {
        //���ز�ѯ����
        s->hide();
        //��ʾ��ǰ����
        this->show();
        });
}
