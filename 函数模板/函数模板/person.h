#pragma once
#include<iostream>
using namespace std;
template<class T1, class T2>
class Person
{
public:
	T1 name;
	T2 age;
public:
	//��������
	Person(T1 name, T2 age);
	void showPerson(void);
};
//���ⶨ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	cout << "�вι���" << endl;
	this->age = age;
	this->name = name;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson(void)
{
	cout << "name=" << name << ",  age= " << age << endl;
}
