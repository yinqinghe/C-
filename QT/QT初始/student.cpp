#include "student.h"
#include<qdebug.h>
Student::Student(QObject *parent)
	: QObject(parent)
{
}

void Student::treat()
{
	qDebug() << "����ʦ�Է���" << endl;
}
void Student::treat(QString foodName)
{
	qDebug() << "����ʦ����" << foodName << endl;
}

Student::~Student()
{
}
