//#include<iostream>
//
//using namespace std;
//
//int myDiv(int a, int b)
//{
//	if (b == 0)
//		return -1;//-1��ʾʧ��
//	return a / b;
//
//}
//void test01()
//{
//	int ret = myDiv(10, -10);
//	if (ret == -1)
//	{
//		cout << "�����쳣��" << endl;
//	}
//	else
//	{
//		cout << "����������" << endl;
//	}
//}
//
//int myDiv01(int a, int b)
//{
//	if (b == 0)
//		throw 'p';//�׳��쳣
//	return a / b;
//
//}
//void test02()
//{
//	try {
//		int ret = myDiv01(10, 0);
//		cout << "ret=" << ret << endl;
//	}
//	catch (int e)//ֻ����  �׳���Int���͵��쳣
//	{
//		cout << "����Int�����쳣 e=" << e << endl;
//	}
//	catch (float e)//ֻ����  �׳���float���͵��쳣
//	{
//		cout << "����float�����쳣 e=" << e << endl;
//	}
//	catch (char e)//ֻ����  �׳���char���͵��쳣
//	{
//		cout << "����char�����쳣 e=" << e << endl;
//	}
//	catch (...)//ֻ����  �׳���Int���͵��쳣
//	{
//		cout << "�������������쳣 e=" << endl;
//	}
//}
//class Person
//{
//private:
//	string name;
//public:
//	Person(string name)
//	{
//		this->name = name;
//		cout << "Person " << name << "���캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "Person " << name << "��������" << endl;
//	}
//
//};
////ջ����
//void test03()
//{
//	try {
//		Person ob1("001");
//		Person ob2("002");
//		Person ob3("003");
//		Person ob4("004");
//
//		throw 10;
//	}
//	catch (int)
//	{
//		cout << "����int �쳣" << endl;
//	}
//	cout << "��������" << endl;
//}
//void testFunc02() throw()
//{
//	throw 3.14f;
//}
//
//void test04()
//{
//	try {
//		testFunc02();
//	}
//	catch (int e)//ֻ����  �׳���Int���͵��쳣
//	{
//		cout << "����Int�����쳣 e=" << e << endl;
//	}
//	catch (float e)//ֻ����  �׳���float���͵��쳣
//	{
//		cout << "����float�����쳣 e=" << e << endl;
//	}
//	catch (char e)//ֻ����  �׳���char���͵��쳣
//	{
//		cout << "����char�����쳣 e=" << e << endl;
//	}
//	catch (...)//ֻ����  �׳���Int���͵��쳣
//	{
//		cout << "�������������쳣 e=" << endl;
//	}
//}
//class MyException
//{
//public:
//	MyException()
//	{
//		cout << "�쳣����" << endl;
//	}
//	MyException(const MyException& ob)
//	{
//		cout << "�쳣��������" << endl;
//	}
//	~MyException()
//	{
//		cout << "�쳣������" << endl;
//	}
//};
//void test05()
//{
//	try {
//		MyException ob;
//		throw ob;
//		//throw new MyException;
//	}
//	//catch (MyException e)
//	//{
//	//	cout << "����MyException�쳣" << endl;
//	//}
//	catch (MyException& e)
//	{
//		cout << "����MyException  &�쳣" << endl;
//	}
//	catch (MyException* e)
//	{
//		cout << "����MyException  *�쳣" << endl;
//		delete e;
//	}
//}
//class People
//{
//private:
//	int age;
//public:
//	People(int age)
//	{
//		if (age < 0 || age>150)
//			throw out_of_range("age��Ч");
//		this->age = age;
//	}
//};
//void test06()
//{
//	try {
//		People ob(200);
//	}
//	catch (exception& e)
//	{
//		cout << "�����쳣" << e.what() << endl;
//	}
//}
//int main(int argc, char* argv[])
//{
//	test06();
//	return 0;
//}