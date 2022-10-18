#include "qt.h"
#include<qpushbutton.h>
#include<qdebug.h>
#include"teacher.h"
#include"student.h"
#define N 1
QT::QT(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);


    //this  ����ǰ������
    //���ñ���
    this->setWindowTitle("��һ������");

    //�̶�����
    //this->setFixedSize(800, 600);
    //���ô��ڴ�С
    this->resize(800, 400);
    //�ڴ����Ϸ�һ����ť
    //����һ��Button�ؼ�
    //parent������Ϊthis  ����  ������  �����ӹ�button
    //��Ϊ��ϣ����button�ŵ���ǰ������  this����ǰ����
    QPushButton* button = new QPushButton("�����", this);

    QPushButton* button1 = new QPushButton("���˶�", this);
    //Ĭ�Ͽؼ�����ʾ�������ڵ����Ϸ�
    //�ƶ���ť
    button1->move(0, 200);

    //���󣺵���button  �ر�������
    //�źŵķ�����button  �����ź�   ������this  �رգ��ۺ�����
    connect(button, &QPushButton::clicked, this, &QWidget::close);

    //lambda���ʽ
    QPushButton* btn2 = new QPushButton("Click me", this);
    btn2->move(200, 0);
    connect(btn2, &QPushButton::clicked, [=]() {
        //��ȡ��ť�ϵ��ı�
        QString text = btn2->text();
        qDebug() << text << endl;

        //���ð�ť���ı�
        btn2->setText("Oh  my  God!");
        });


    //ʵ����һ����ʦ
    teacher* tea = new teacher(this);
    //ʵ����һ��ѧ��
    Student* stu = new Student(this);
#if N
    //connect������ʦ��ѧ���Ĺ�ϵ
    void (teacher:: * p1)() = &teacher::hungry;
    void (Student:: * p2)() = &Student::treat;
    connect(tea, p1, stu, p2);
#else
    //�����ԭ��hungry�źű�������
    //ͨ������ָ��  ��ȷ�Ǹ��ź�
    void (teacher:: * p1)(QString foodName) = &teacher::hungry;
    void (Student:: * p2)(QString foodName) = &Student::treat;
    connect(tea, p1, stu, p2);
#endif
    //�¿���    ��ʦ����
    QPushButton* btn = new QPushButton("�¿�", this);
    btn->move(400, 0);
    connect(btn, &QPushButton::clicked, [=]() {
#if N
        //�¿κ�����  ����ʦ���������ź�
        emit tea->hungry();
#else
        //�¿κ�����  ����ʦ���������ź�
        emit tea->hungry("������");
#endif
        });
}
//QT::~QT()
//{
//
//}