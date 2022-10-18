#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& ob);
	friend Person operator+(Person& ob1, Person& ob2);
private:
	char* name;
	int num;
public:
	Person()
	{
		this->name = NULL;
		this->num = 0;
		cout << "�޲ι���" << endl;
	}
	Person(char* name, int num)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->num = num;
		cout << "�вι���" << endl;
	}

	~Person()
	{
		if (this->name != NULL)
		{
			delete [] this->name;
			this->name = NULL;
		}
		cout << "��������" << endl;
	}
public:
	//��Ա����  ������������ ob1 ��this����  ob2�ò���ob����
	//Person operator+( Person& ob)//ob1   ob2
	//{
	//	//name+name(�ַ���׷�ӣ�
	//	char* tmp_name = new char[strlen(this->name) + strlen(ob.name) + 1];
	//	strcpy(tmp_name, this->name);
	//	strcat(tmp_name, ob.name);

	//	//num+num(��ֵ��ӣ�
	//	int tmp_num = this->num + ob.num;
	//	Person tmp(tmp_name, tmp_num);

	//	//�ͷ�tmp_name�Ŀռ�
	//	if (tmp_name != NULL)
	//	{
	//		delete[] tmp_name;
	//		tmp_name = NULL;
	//	}
	//	return tmp;
	//}
	void printPerson(void)
	{
		cout << "name=" << name << ",num=" << num << endl;
	}

};
//ȫ�ֺ�����Ϊ��Ԫ ������������<<
ostream& operator<<(ostream& out, Person& ob)//out=cout,ob=ob1
{
	out << ob.name << "," << ob.num;
	//ÿ��ִ����  ����ֵ�õ�cout
	return out;
}
//ȫ�ֺ�����Ϊ��Ԫ ������������+
Person operator+(Person& ob1, Person& ob2)//ob1   ob2
{
	//name+name(�ַ���׷�ӣ�
	char* tmp_name = new char[strlen(ob1.name) + strlen(ob1.name)+1];
	strcpy(tmp_name, ob1.name);
	strcat(tmp_name, ob2.name);

	//num+num(��ֵ��ӣ�
	int tmp_num = ob1.num + ob2.num;
	Person tmp(tmp_name, tmp_num);
	
	//�ͷ�tmp_name�Ŀռ�
	if (tmp_name != NULL)
	{
		delete [] tmp_name;
		tmp_name = NULL;
	}
	return tmp;
}
//void test01()
//{
//	Person ob1("lucy", 18);
//	//��ͨ�ĳ�Ա����  ������Ϣ  ���ַ�ʽ̫LOW��
//	//ob1.printPerson();
//
//	//coutĬ�������ʽ �޷�ʶ�� �Զ������  �����ʽ
//	//cout << ob1 << endl;//err
//	//��������صĵ��÷�ʽ1��
//	operator<<(cout, ob1);
//	//��������صĵ��÷���2��
//	//�Է���1�����Ż� ȥ��operator,��һ������ ���������<<�����  �ڶ������� ���������<<���ұ�
//	cout << ob1;//�ȼ�	operator<<(cout, ob1);
//
//	Person ob2("bob", 8);
//	cout << ob1 << "  " << ob2 << endl;
//
//}
//void test02()
//{
//	Person ob1("lucy", 18);
//	Person ob2("bob", 19);
//
//	cout << ob1 << endl;
//	cout << ob2 << endl;
//	//	Person ob3= operator(ob1 + ob2);
//	//Person ob3= ob1 + ob2;
//	//cout << ob3 << endl;
//
//}
void test03()
{
	Person ob1("ordan", 2);
	Person ob2("ike", 2);
	//Person ob3 = ob1.operator+(ob2);
	//Person ob3 = ob1 + ob2;
	//cout << ob3 << endl;
}
int main(int argc, char* argv[])
{
	test03();

	return 0;
}


//int main(int argc, char* argv[])
//{
//	Person ob1("lucy", 18);
//	//��ͨ�ĳ�Ա����  ������Ϣ
//	//ob1.printPerson();
//
//	//coutĬ�������ʽ �޷�ʶ�� �Զ������  �����ʽ
//	//cout << ob1 << endl;//err
//	//��������صĵ��÷�ʽ1��
//	operator<<(cout, ob1);
//	//��������صĵ��÷���2��
//	//�Է���1�����Ż� ȥ��operator,��һ������ ���������<<�����  �ڶ������� ���������<<���ұ�
//	cout << ob1;//�ȼ�	operator<<(cout, ob1);
//
//	Person ob2("bob", 8);
//	cout << ob1 << "  " << ob2 << endl;
//
//
//	return 0;
//}