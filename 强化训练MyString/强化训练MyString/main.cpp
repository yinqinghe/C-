#include<iostream>
#include"MyString.h"
using namespace std;

int main(int argc, char* argv[])
{
	MyString str1("vnaeifna");
	//�Զ������  ��������<<(�ձ�ȫ����Ԫ����ʵ�֣�
	cout << str1 << endl;
	cout << "size= " << str1.Size() << endl;

	//�Զ������  ��������>>(�ձ�ȫ����Ԫ����ʵ�֣�
	cin >> str1;
	cout << str1 << endl;
	cout << "size= " << str1.Size() << endl;


	MyString strL2("hello class");
	//����[]�����
	cout << strL2[1] << endl;

	//����[]�����   ����ֵ��������ֵ  ����д����
	//����[]�����   �ķ���ֵ����������
	strL2[1] = 'E';
	cout << strL2 << endl;

	MyString str3("hello str3");
	cout << str3 << endl;

	//������str2��ֵ��str3
	//��Ĭ�ϸ�ֵ���  ǳ������
	//��������=����� ����Ա������ɣ�
	str3 = strL2;
	cout << "str3:" << str3 << endl;
	
	MyString str4("hello str4");
	cout << "str4:" << str4 <<",size=" <<str4.Size()<< endl;
	str4 = "hello string";
	cout << "str4:" << str4 << ",size=" << str4.Size()<< endl;

	//����+�����
	MyString str5("����ɵ��");
	MyString str6("����ɵ��");
	cout << str5 + str6 << endl;
	//cout << (str5 + str6).Size << endl;

	MyString str7("�������˶�");
	cout << str7 + "�ǵ�" << endl;

	//����==�����
	MyString str8("����FOOL");
	MyString str9("����ɵ��");
	if (str8 == str9)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
	if (str8 == "����FOOL")
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}
	return 0;
}