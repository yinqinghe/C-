#include "mainwindow.h"
#include<qmenubar.h>//�˵���
#include<qtoolbar.h>//������
#include<qdebug.h>//״̬��
#include<qlabel.h>//label��ǩ  ��ʾ�ı�  ͼƬ  ����
#include<qdockwidget.h>//í�Ӳ���
#include<qtextedit.h>//�ı�����ؼ�
#include<qpixmap.h>//ͼƬ�ؼ�

#pragma execution_character_set("utf-8")
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //���ô��ڱ���
    this->setWindowTitle("QMianWindow");
    //���ô��ڵĴ�С
    this->resize(800, 600);

    //����һ���˵���
    QMenuBar* menuBar = new QMenuBar(this);

    //���˵�����ӵ���������
    this->setMenuBar(menuBar);

    //����˵�
    QMenu* file = new QMenu("�ļ�", this);
    QMenu* edit = new QMenu("�༭", this);

    //�ڲ˵�������Ӳ˵�
    menuBar->addMenu(file);
    menuBar->addMenu(edit);

    //����˵���
    QAction* New = new QAction("New", this);
    QAction* Save = new QAction("Save", this);

    //���˵���  ��ӵ�  �˵���
    file->addAction(New);
    file->addSeparator();//����һ�������ķָ���
    file->addAction(Save);

    //���˵���New  ���ÿ�ݼ�
    New->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
    //��New������
    connect(New, &QAction::triggered, [=]() {
        qDebug() << "�½��ļ���" << endl;
        });

    //����һ��������
    QToolBar* tool = new QToolBar(this);
    //����������ӵ�  ��������
    this->addToolBar(tool);

    //���˵���New  Edit���빤������
    tool->addAction(New);
    tool->addSeparator();
    tool->addAction(Save);

    //������Ĭ����������  false��������
    tool->setFloatable(false);

    //���ù�����  ���������
    tool->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);

    //����һ��״̬��
    QStatusBar* status = new QStatusBar(this);
    //��״̬��  ��ӵ�  ��������
    this->setStatusBar(status);

    //��������label
    QLabel* label1 = new QLabel("�����ʾ��Ϣ", this);
    QLabel* label2 = new QLabel("�Ҳ���ʾ��Ϣ", this);
    //
    status->addWidget(label1);//�����ʾ
    status->addPermanentWidget(label2);//�Ҳ���ʾ

    //����һ��í�Ӳ���
    QDockWidget* dock = new QDockWidget("í��", this);
    //��í�Ӳ���  ��ӵ�  ��������
    this->addDockWidget(Qt::TopDockWidgetArea, dock);
    //����í�Ӳ�����ͣ��λ�ã�����ͣ����
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

    //����һ��   ���Ĳ���
    //����һ���ı���   ��ʾ����
    QTextEdit* text = new QTextEdit(this);
    text->setText("��ǰ���¹�\n���Ƶ���˪");
    this->setCentralWidget(text);

    //���˵���  ���һ��ͼ��
    //����һ��ͼƬ�ؼ�
    QPixmap pix;
    //ͼƬ�ؼ����  ��ԴͼƬ
    //����ʾ��Դ�ļ� +����ͼƬ����Դ�ļ��е�·��
    pix.load(":/image/01.jpg");
    New->setIcon(QIcon());
}
