#include "MyString.h"
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

MyString::MyString()
{
	cout << "�޲ι���" << endl;
}

MyString::MyString(const char* str)
{
	cout << "char *���캯��" << endl;
	//����ռ�
	this->str = new char[strlen(str) + 1];
	//�����ַ���
	strcpy(this->str, str);
	
	//����size
	this->size = strlen(str);
}

MyString::MyString(const MyString& ob)
{
	cout << "�������캯��" << endl;
	//����ռ�
	this->str = new char[strlen(ob.str) + 1];
	//�����ַ���
	strcpy(this->str, ob.str);

	//����size
	this->size = ob.size;
}

MyString::~MyString()
{
	cout << "��������" << endl;
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}
}

int MyString::Size()
{
	return this->size;
}

char& MyString::operator[](int index)//index��ʾ������±�
{
	//�ж��±��Ƿ�Ϸ�
	if (index >= 0 && index < this->size)
	{
		return this->str[index];
	}
	else
	{
		cout << "index��Ч" << endl;
	}

}

MyString& MyString::operator=(const MyString& ob)
{
	//��ob.str������this->str����
	// 1.��this->strָ��ľɿռ�  �ͷŵ�
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}
	//����ob.str�Ĵ�С����ռ�
	this->str = new char[ob.size + 1];
	strcpy(this->str, ob.str);

	this->size = ob.size;

	return *this;
	// TODO: �ڴ˴����� return ���
}

MyString& MyString::operator=(const char* str)
{
	//��ob.str������this->str����
	// 1.��this->strָ��ľɿռ�  �ͷŵ�
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}

	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);

	this->size = strlen(str);

	return *this;

	// TODO: �ڴ˴����� return ���
}

MyString& MyString::operator+(const MyString& ob)
{
	//thisָ�����str5  ob��str6�ı���
	//���㽫�����ַ���ƴ�Ӻ�ĳ���
	int newSize = this->size + ob.size + 1;
	char* tmp_str = new char[newSize];
	//���tmp_str��ָ��Ŀռ�
	memset(tmp_str, 0, newSize);

	//�Ƚ�this->str������tmp_str��  Ȼ��ob.str ׷�ӵ�tmp_str��
	strcpy(tmp_str, this->str);
	strcat(tmp_str, ob.str);

	static MyString newString(tmp_str);
	//�ͷ�tmp_strָ�����ʱ�ռ�
	if (tmp_str != NULL)
	{
		delete[] tmp_str;
		tmp_str = NULL;
	}
	return newString;
	// TODO: �ڴ˴����� return ���
}

MyString& MyString::operator+(const char* str)
{
	//thisָ�����str5  ob��str6�ı���
//���㽫�����ַ���ƴ�Ӻ�ĳ���
	int newSize = this->size + strlen(str) + 1;
	char* tmp_str = new char[newSize];
	//���tmp_str��ָ��Ŀռ�
	memset(tmp_str, 0, newSize);

	//�Ƚ�this->str������tmp_str��  Ȼ��ob.str ׷�ӵ�tmp_str��
	strcpy(tmp_str, this->str);
	strcat(tmp_str, str);

	static MyString newString(tmp_str);
	//�ͷ�tmp_strָ�����ʱ�ռ�
	if (tmp_str != NULL)
	{
		delete[] tmp_str;
		tmp_str = NULL;
	}
	return newString;
	// TODO: �ڴ˴����� return ���
}

bool MyString::operator==(const MyString& ob)
{
	if ((strcmp(this->str, ob.str) == 0) && (this->size == ob.size))
	{
		return true;
	}
	return false;
}

bool MyString::operator==(const char* str)
{
	if ((strcmp(this->str, str) == 0) && (this->size == strlen(str)))
	{
		return true;
	}
	return false;
}

ostream& operator<<(ostream& out, MyString& ob)
{
	out<<ob.str;
	return out;
}

istream& operator>>(istream& in, MyString& ob)
{
	if (ob.str != NULL)
	{
		delete [] ob.str;
		ob.str = NULL;
	}


	char buf[1024] = "";
	in >> buf;

	ob.str = new char[strlen(buf) + 1];
	strcpy(ob.str, buf);
	ob.size = strlen(buf);

	return in;
}
