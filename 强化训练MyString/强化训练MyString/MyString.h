#pragma once
#include<iostream>
using namespace std;
class MyString
{
	//����ȫ�ֺ���  ���ǳ�Ա����
	friend ostream& operator<<(ostream& out, MyString& ob);
	friend istream& operator>>(istream& in, MyString& ob);
private:
	char* str;
	int size;
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& ob);
	~MyString();

public:
	int Size(void);


	//����[]
	char& operator[](int index);
	//����=�����Ƕ���
	MyString& operator=(const MyString& ob);
	//����= �������ַ�������  const char *
	MyString& operator=(const char *str);
	//����+�����
	MyString& operator+(const MyString& ob);
	MyString& operator+(const char* str);

	//����==�����
	bool operator==(const MyString& ob);
	bool operator==(const char* str);

};

