#include "qt.h"
#include <QtWidgets/QApplication>
#pragma execution_character_set("utf-8")
int main(int argc, char *argv[])
{
    // QApplication  Ӧ�ó�����  ��ʼ�����ǵ�Ӧ�ó���
    QApplication a(argc, argv);
    //����һ�����ڿؼ�
    QT w;

    //��ʾһ������   hide���ش���
    //����Ĭ�������ص�
    w.show();

    //a.exec()  ���¼�ѭ����������  �ȴ��û��������棩
    return a.exec();
}
