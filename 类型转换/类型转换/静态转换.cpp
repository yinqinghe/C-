//#include<iostream>
//#include<typeinfo>
//using namespace std;
//
////�������νṹ�л��ࣨ���ࣩ�������ࣨ���ࣩ֮��ָ������õ�ת��
////��������ת������ ����ָ�룬����ָ������ռ䣨��ȫ��
////��������ת������ ����ָ�룬���� ָ�����ռ䣨����ȫ��
//
//class Animal{};
//class Dog:public Animal
//{};
//class Other{};
//
////��̬ת��static_cast
//void test01()
//{
//	//static_cast  ������  ��������
//	char ch = 'a';
//	double d = (double)ch;
//	int a = static_cast<int>(d);
//	cout << typeid(d).name() << endl;
//	cout << typeid(a).name() << endl;
//	cout << "d=" << d << endl;
//	cout << "a=" << a << endl;
//
//	//static_cast  ������  �Զ����������ͣ��ṹ��  �ࣩ
//	//��ϵ����֮��
//	//����ת��  ��ȫ
//	Animal* p = static_cast<Animal*>(new Dog);
//	//����ת��  ����ȫ  ����Խ��
//	Dog* p2 = static_cast<Dog*>(new Animal);
//
//	//static_cast ����������   ����ص���֮��ת��
//	//Animal* p3 = static_cast<Animal*>(new Other);//err
//}
////dynamic_cast��̬ת��
//void test02()
//{
//	//1.dynamic_cast  ��֧��  ��������
//	char ch = 'a';
//	//double d = dynamic_cast<double>(ch);
//	
//	//2.dynamic_cast  ����ת��  ������ָ��ָ������ռ�  ��ȫ��
//	Animal* p1 = dynamic_cast<Animal*>(new Dog);
//
//	//3.dynamic_cast  ����ת��  ������ָ��  ָ��  ����ռ�  ����ȫ��
//	//Dog* p2 = dynamic_cast<Dog*>(new Animal);//��֧��  ����ȫ  ��ת��
//
//	//4.dynamic_cast  ��֧��  û�й�ϵ��  ����ת��
//	//Animal* p3 = dynamic_cast<Animal*>(new Other);
//
//}
////����ת�� conat_cast
//void test03()
//{
//	const int* p = NULL;
//	int* p1 = const_cast<int*>(p);
//
//	int* p2 = NULL;
//	const int* p3 = const_cast<const int*>(p2);
//
//	//conat_cast ��֧��  ��ָ������õ�ת��
//	const int a = 100;
//	//int b = const_cast<int>(a);//err
//
//	int data = 100;
//	//��������  ת����  ��ͨ����
//	const int& ob = data;
//	int& ob2 = const_cast<int&>(ob);
//}
//void test04()
//{
//	//reinterpret_cast  ��֧�ֻ�����������
//	char ch = 'a';
//	//double d = reinterpret_cast<double>(ch); // err
//
//	//reinterpret_cast  ֧��  ����ص�����ת��
//	Animal * p1 = reinterpret_cast<Animal*>(new Other);
//
//	//����ת��
//	Animal* p2 = reinterpret_cast<Animal*>(new Dog);
//
//	//����ת��
//	Dog* p3 = reinterpret_cast<Dog*>(new Animal);
//}
//int main(int argc, char* argv[])
//{
//	test03();
//
//	return 0;
//}