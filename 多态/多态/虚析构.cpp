//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "������˯������" << endl;
//		
//	}
//	Animal()
//	{
//		cout << "animal����" << endl;
//	}
//	//������
//	virtual ~Animal()
//	{
//		cout << "animal����" << endl;
//	}
//};
//class Cat:public Animal
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "Cat��˯������" << endl;
//
//	}
//	Cat()
//	{
//		cout << "Cat����" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat����" << endl;
//	}
//};
//
//void test01()
//{
//	Animal* p = new Cat;
//	p->sleep();
//
//	delete p;
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}