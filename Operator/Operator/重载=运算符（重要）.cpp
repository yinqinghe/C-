//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//class Person
//{
//private:
//	char* name;//ָ���Ա
//public:
//	Person()
//	{
//		name = NULL;
//		cout << "�޲ι���" << endl;
//	}
//	Person(char *name) 
//	{
//		//����ʵ�ʴ����  ����   ��this->name����ռ�
//		this->name = new char[strlen(name) + 1];
//
//		//��nameָ����ַ���  ������  this->nameָ��Ŀռ���
//		strcpy(this->name, name);
//
//		cout << "�вι���" << endl;
//
//	}
//	Person(const Person& ob)                        //���û�����ظ�ֵ����������������Զ�����Ĭ�ϵĸ�ֵ��������غ�����
//	{                                               //��Ϊ����Ĭ�Ͽ������� �����м�ֵ����
//		//this��������¶���
//		cout << "�������캯��" << endl;
//		this->name = new char[strlen(ob.name) + 1];
//		strcpy(this->name, ob.name);
//	}
//	~Person()
//	{
//		cout << "��������" << endl;
//		if (this->name != NULL)
//		{
//			delete [] this->name;
//			this->name = NULL;
//		}
//	}
//public:
//	void showPerson(void)                           //ǰ��  ��������ָ���Ա  �������� =�����    
//	{                                               //���� û��ָ���Ա  ����Ҫ����=����� ��Ĭ�ϵ�ǳ�����Ϳ�����ɣ�
//		cout << "name= " <<name << endl; //ָ����Ϊ��ĳ�Ա���������캯��  �����Զ��� ��Ĭ�Ͽ���������
//	}
//
//	//��Ա����  ����=�����
//	Person& operator=(Person& ob)// ob == ob1
//	{
//		//this==>&ob3
//		if (this->name != NULL)//˵��this->name��ǰ��ָ��             �ص㣡����������������������������
//		{
//			//�ͷ���ǰָ��Ŀռ�
//			delete[] this->name;
//			this->name = NULL;
//		}
//		//����ռ�
//		this->name = new char[strlen(ob.name) + 1];
//		//��������
//		strcpy(this->name, ob.name);
//		return *this;//�ص㣡��������
//	}
//
//	//����==  ==�������ж������
//	bool operator==(Person& ob)
//	{
//		if (strcmp(this->name, ob.name) == 0)
//		{
//			return true;
//		}
//		return false;
//	}
//
//
//	//����!=  !=�������ж������
//	bool operator!=(Person& ob)
//	{
//		if (strcmp(this->name, ob.name) != 0)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//void test01()
//{
//	Person ob1("Mike");
//	ob1.showPerson();
//
//	//ע�� �ɶ���  ���¶���ֵ  ���õ��ǿ������죨Ĭ�Ͽ��������i�ǵ����ĸ�ֵ��
//	Person ob2 = ob1;//����ط� ���ǵ��ø�ֵ=�����
//	ob2.showPerson();
//
//	Person ob3;
//	ob3 = ob1;//�˴����ǵ��õĸ�ֵ=�������Ĭ�ϸ�ֵ=������ǳ������
//	ob3.showPerson();
//
//	Person ob4, ob5, ob6;
//	ob6=ob5 = ob4 = ob1;
//	ob5.showPerson();
//	ob6.showPerson();
//}
//void test02()
//{
//	Person ob1("lucy");
//	Person ob2("lucy");
//
//
//	Person ob3("bobo");
//
//	if (ob1 == ob2)
//	{
//		cout << "ob1==ob2" << endl;
//	}
//	else
//	{
//		cout << "ob1!=ob2" << endl;
//	}
//
//
//	if (ob1 != ob3)
//	{
//		cout << "ob1!=ob3" << endl;
//	}
//	else
//	{
//		cout << "ob1==ob3" << endl;
//	}
//}
//int main(int argc, char* argv[])
//{
//	test02();
//	return  0;
//}