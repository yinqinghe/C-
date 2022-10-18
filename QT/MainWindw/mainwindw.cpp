#include "mainwindw.h"
#include<qaction.h>
#include<qdebug.h>
#include<qdialog.h>
#include<qmessagebox.h>
#include<qfontdialog.h>
#include<qcolordialog.h>
#include<qfiledialog.h>
#pragma execution_character_set("utf-8")
MainWindw::MainWindw(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //ͨ��uiָ���Ա  ȥ����  UI�ļ��ϵĿռ�
    //connect(ui.menuBar, &QAction::triggered, [=]() {
    //    qDebug() << "�½��ļ���" << endl;
    //    });


    //��Ϣ�Ի���
#if 0
    //ģ̬�Ի���
    QDialog* dlg = new QDialog(this);
    //�о��棺ԭ���ǵ����ĶԻ��� ̫С  �������öԻ���Ĵ�С
    dlg->resize(400, 200);
    dlg->exec();
    qDebug()<< "��ʾģ̬�Ի���" << endl;
#endif

#if 0
    //��ģ̬�Ի���
    QDialog* dlg = new QDialog(this);
    //
    dlg->resize(200, 100);
    dlg->show();
    qDebug() << "��ʾ��ģ̬�Ի���" << endl;
#endif

#if 0
    //����һ�������ģ̬�ģ�
    QMessageBox::critical(this, "����", "�����صĴ�����ʾ");
#endif
#if 0
    //����һ����Ϣ��ʾ��ģ̬�ģ�
    QMessageBox::information(this, "��Ϣ", "��Ҫ����Ϣ");
#endif
#if 1
    //����һ��ѯ�ʶԻ���ģ̬�ģ�
    QMessageBox::StandardButton ret;

    ret=QMessageBox::question(this, "ѯ��", "����������",QMessageBox::SaveAll|QMessageBox::Cancel,QMessageBox::Cancel);
    if (ret == QMessageBox::SaveAll)
    {
        qDebug() << "�û�ѡ����save" << endl;
    }
    else if (ret == QMessageBox::Cancel)
    {
        qDebug() << "�û�ѡ����cancel" << endl;
    }
#endif
#if 1
    //����Ի���
    bool yes;
    QFont font;
    font=QFontDialog::getFont(&yes, QFont("����"), this);
    qDebug() << yes << endl;
    if (yes == true)
    {
        qDebug() << "����Ϊ��" << font.family() << ",�����С��" << font.pointSize() << endl;
    }

#endif
#if 1
    //��ɫ�Ի���
    QColor color;

    color=QColorDialog::getColor();
    qDebug() << "r=" << color.red() << ", g=" << color.green() << ", b= " << color.blue() << endl;
#endif
#if 1
    //�ļ��Ի���
    QString filename;
    filename = QFileDialog::getOpenFileName(this,"�ļ�","C:\\Users\\�����\\Pictures\\img",tr("Images(*.png *.jpg)"));
    qDebug() << filename << endl;
#endif
}
