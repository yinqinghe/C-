#pragma once
#pragma execution_character_set("utf-8")
#include <QObject>

class Student : public QObject
{
	Q_OBJECT

public:
	Student(QObject *parent);
	~Student();
signals:

public slots:
	//����ֵ����Ϊvoid  ��Ҫ����  ��Ҫʵ��  �����в���  ��������
	void treat();
	void treat(QString foodName);

};
