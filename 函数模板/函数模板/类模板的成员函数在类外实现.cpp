//#include<iostream>
//using namespace std;
////include��׼�ǰ���ͷ�ļ�  �����ϲ������.cpp
////#include"person.cpp"
//#include"person.h"
//
////��ģ�� �ᾭ�����α���
////��һ��  ��ģ��  �������  ����ģ��ĳ�Ա���õ�ʱ��
////C++/C  �����ļ�����
////���  ��ģ���.cpp��.h���ļ�  �����ԭ��  �ڵڶ��α���
////����.cpp��.h����һ��
//
//////�ϸ���˵  ��ģ�������  ����Person  ����Person<T1,T2>
////template<class T1,class T2>
////class Person {
////	
////public:
////	T1 name;
////	T2 age;
////public:
////	//��������
////	Person(T1 name, T2 age);
////	void showPerson(void);
////
////};
//////���ⶨ��
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	cout << "�вι���" << endl;
////	this->age = age;
////	this->name = name;
////}
////
////template<class T1, class T2>
////void Person<T1, T2>::showPerson(void)
////{
////	cout << "name=" << name << ",  age= " << age << endl;
////}
//
//int main(int argc, char* argv[])
//{
//	Person<string, int> ob1("��������", 18);
//	ob1.showPerson();
//	return 0;
//}