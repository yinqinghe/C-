//#include<iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	void func(void)
//	{
//		cout << "�����е�void  func" << endl;
//
//	}
//	void func(int a)
//	{
//		cout << "�����е�int func a=" << a << endl;
//	}
//};
//
//class Son:public Base
//{
//public:
//	//һ������  ʵ���� �����ͬ����Ա����  ���������и���ͬ����Ա����
//	void func(void)
//	{
//		cout << "�����е�void  func" << endl;
//
//	}
//};
//void test01()
//{
//	//Ϊɶ������������⣿����Ĺ��������  ֻ�и����Լ�֪������ô�������������  ϵͳ�Զ����ã�
//	//�����̳и������г�Ա����������������������⣩�ͳ�Ա����
//	Son ob1;
//	ob1.func();
//	//ob1.func(10);err
//
//	//����û�  ����Ҫ���ø���  ��ͬ����Ա����  �����������
//	ob1.Base::func();//���ø����void  func
//	ob1.Base::func(10);//���ø����void func
//
//}
//
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}