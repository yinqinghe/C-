//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void myPrintInt(int val);
//void test01()
//{
//	//���˶�̬����vector  ��ģ��
//	vector<int> v;//v����һ�������vector����
//
//
//	//push_back  β������
//	v.push_back(100);
//	v.push_back(200);
//	v.push_back(300);
//	v.push_back(400);
//
//	//��������
//	//����һ���������洢  v����ʼ������
//	vector<int>::iterator  biginIt = v.begin();
//	//����һ���������洢  v�Ľ���������
//	vector<int>::iterator  endIt = v.end();
//
//	//forѭ������
//	for (; biginIt != endIt; biginIt++)
//	{
//		//�Ե�����ȡ*  �������  ������Ԫ��
//		//*biginIt
//		cout << *biginIt << "   ";
//
//	}
//	cout << endl;
//
//	//forѭ������2���Ƽ���
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//	
//	//STL�ṩ���㷨�����������������㷨ͷ�ļ�alagrithm)
//	//for_each����������ʼ--->����  ���Ԫ��ȡ��
//	//myPrintInt�������ݵĴ�ӡ��ʽ
//	for_each(v.begin(), v.end(), myPrintInt);
//	cout << endl;
//}
//
//void myPrintInt(int val)
//{
//	cout << val << "   ";
//}
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//};
//void myPrintPerson(Person& ob)
//{
//	cout << "name= " << ob.name << ", age " << ob.age << endl;
//}
//void test02()
//{
//	Person ob1("001", 001);
//	Person ob2("002", 002);
//	Person ob3("003", 003);
//	Person ob4("004", 004);
//
//	//����һ��vector�������ob1~ob4������
//	vector<Person> v;
//	v.push_back(ob1);
//	v.push_back(ob2);
//	v.push_back(ob3);
//	v.push_back(ob4);
//
//	for_each(v.begin(), v.end(), myPrintPerson);
//}
//
//void test03()
//{
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//
//	v1.push_back(100);
//	v1.push_back(200);
//	v1.push_back(300);
//	v1.push_back(400);
//
//	v1.push_back(1000);
//	v1.push_back(2000);
//	v1.push_back(3000);
//	v1.push_back(4000);
//
//	//�����ڶ���һ��vector����   ���  v1  v2 v3
//	vector<vector<int>> v;
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//
//	//forѭ������
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//*it==vector<int>  v1 v2 v3
//		for (vector<int>::iterator mit = (*it).begin(); mit != (*it).end(); mit++)
//		{
//			//*mit ==int
//			cout << *mit << "  ";
//		}
//		cout << "002" << endl;
//	}
//}
//int main(int argc, char* argv[])
//{
//	test03();
//	return 0;
//}