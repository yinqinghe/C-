//#include<iostream>
//
//using namespace std;
//class Base
//{
//private:
//	int a;
//public:
//	Base()
//	{
//		cout << "������޲ι��캯��" << endl;
//	}
//	Base(int a)
//	{
//		this->a = a;
//		cout << "������вι��캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "�������������" << endl;
//	}
//
//
//};
//class Son :public Base
//{
//private:
//	int b;
//public:
//	Son()
//	{
//		cout << "������޲ι��캯��" << endl;
//	}
//	Son(int b):Base(b)
//	{
//		this->b = b;
//		cout << "������вι��캯�� int" << endl;
//	}
//
//
//	//���������  ��ʼ���б�  ��ʾ�ĵ��ø�����вι���
//	//�������ƣ�������
//	Son(int a,int b):Base(a)//��ʾ�ĵ��ø�����вι���
//	{
//		this->b = b;
//		cout << "������вι��캯�� int  int" << endl;
//	}
//	~Son()
//	{
//		cout << "�������������" << endl;
//	}
//};
//void test01()
//{
//	//����  Ĭ��  �����  ������޲ι���
//	Son ob1(10);
//
//	//���������  ��ʼ���б�  ��ʾ�ĵ��ø�����вι���
//	//Son ob2(10, 20);
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	cout << sizeof(Son) << endl;
//	return 0;
//}