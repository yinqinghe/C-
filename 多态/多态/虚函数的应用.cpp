//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "Base�ڰ�����˯��" << endl;
//	}
//};
//
//class Son1 :public Base
//{
//public:
//	void sleep(void)
//	{
//		cout << "Son1�ڰ�����˯��" << endl;
//	}
//};
//class Son2 :public Base
//{
//public:
//	void sleep(void)
//	{
//		cout << "Son2����ȵ�˯��" << endl;
//	}
//};
//class Son3 :public Base
//{
//public:
//	void sleep(void)
//	{
//		cout << "Son3��������˯��" << endl;
//	}
//};
//class Son4 :public Base
//{
//public:
//	void sleep(void)
//	{
//		cout << "Son4���������׵�˯��" << endl;
//	}
//};
////�Ի���ָ����Ϊ�����Ĳ���  �������Բ����û����������������������
//void sleepFun(Base &ob)
//{
//	ob.sleep();
//}
//
//int main(int argc, char* argv[])
//{
//	Son1 ob1;
//	Son2 ob2;
//	Son3 ob3;
//	Son4 ob4;
//	sleepFun(ob1);
//	sleepFun(ob2);
//	sleepFun(ob3);
//	sleepFun(ob4);
//	return 0;
//}