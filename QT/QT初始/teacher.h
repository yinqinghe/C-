#pragma once
#pragma execution_character_set("utf-8")
#include <QObject>
#include<qstring.h>
class teacher : public QObject
{
	Q_OBJECT

public:
	teacher(QObject *parent);
	~teacher();
signals://�Զ����źź���
	//�����źŵĹ��� ����ֵ����void  ֻ������  ����ʵ��  �����в���  ��������
	void hungry();
	void hungry(QString foodName);

public slots://�Զ���ۺ���\



};
