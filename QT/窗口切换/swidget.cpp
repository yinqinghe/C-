#include "swidget.h"
#include"qpushbutton.h"
SWidget::SWidget(QWidget *parent)
	: QWidget(parent)
{
	//���ò�ѯ���ڵĴ�С
	this->resize(1000, 800);
	this->setWindowTitle("��ѯ����");

	//����һ�����˰�ť
	QPushButton* btn = new QPushButton("back", this);
	//������back  �ͷ���һ��back�ź�
	connect(btn, &QPushButton::clicked, [=]() {
		emit this->back();
		});
}

SWidget::~SWidget()
{
}
