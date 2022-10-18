#include "MyArray.h"
#include <cstddef>
#include<iostream>
using namespace std;

MyArray::MyArray()
{
	//���������Ϊ100
	this->capacity = 100;
	//�����sizeΪ0
	this->size = 0;
	//�������� ����������ռ�
	this->addr = new int[this->capacity];
}

MyArray::MyArray(int capacity)
{
	this->capacity = capacity;
	this->size = size;
	this->addr = new int[this->capacity];
}

MyArray::~MyArray()
{
	if (this->addr != NULL)
	{
		delete [] this->addr;
		this->addr = NULL;
	}
}

void MyArray::pushBack(int data)
{
	if (this->size >= this->capacity)
	{
		cout << "��������" << endl;
		return;
	}
	addr[this->size] = data;
	this->size++;

}

int MyArray::getData(int pos)
{
	if (pos >= this->size|| pos<0)
	{
		cout << "λ�ù���" << endl;
		return -1;
	}
	return addr[pos];
}

void MyArray::setData(int pos, int data)
{
	if (pos >= this->size || pos < 0)
	{
		cout << "λ�ù���" << endl;
		return ;
	}
	addr[pos] = data;
	return ;
}

int MyArray::getCapacity(void)
{
	return this->capacity;
}

int MyArray::getSize(void)
{
	return this->size;
}

void MyArray::printMyArray()
{
	int i = 0;
	for (i = 0; i < this->size; i++)
	{
		cout << this->addr[i] << "  ";
	}
	cout << endl;
}
