//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<numeric>
//#include <functional>
//using namespace std;
//int myTransInt(int val)
//{
//	return val*val;
//}
//class MyTransInt
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//};
////�����㷨
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//
//	//��v1������Ԫ��  ���˵�v2��
//	vector<int> v2;
//	//Ԥ�ȣ�����v2�Ĵ�С
//	v2.resize(v1.size());
//	
//	//transform(v1.begin(), v1.end(), v2.begin(), ���˷�ʽ);
//	// ��ͨ����
//	//transform(v1.begin(), v1.end(), v2.begin(), myTransInt);
//	//�º���
//	transform(v1.begin(), v1.end(), v2.begin(), MyTransInt());
//	for_each(v2.begin(), v2.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//
//}
////���ò����㷨
//class Person
//{
//public:
//	string name;
//	int age;
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->name << ",age = " << this->age << endl;
//	}
//	bool operator==(const Person& ob)
//	{
//		if (this->name == ob.name && this->age == age)
//			return true;
//		return false;
//	}
//};
//void test02()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//
//	vector<int>::iterator ret;
//	ret = find(v1.begin(), v1.end(), 200);
//	if (ret != v1.end())
//	{
//		cout << "�ҵ�������Ϊ��" << *ret << endl;
//	}
//	vector<Person> v2;
//	v2.push_back(Person("���", 25));
//	v2.push_back(Person("����", 35));
//	v2.push_back(Person("��˹��³��", 29));
//	v2.push_back(Person("���˶�", 21));
//
//	Person tmp("���˶�", 21);
//	vector<Person>::iterator ret2;
//	//
//	ret2 = find(v2.begin(), v2.end(), tmp);
//	if (ret2 != v2.end())
//	{
//		cout << "�ҵ�������name=" << (*ret2).name << ", age = " << (*ret2).age << endl;
//	}
//}
//bool myGreaterThan20(int val)
//{
//	return val > 20;
//}
//class MyGreaterThan20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//void test03()
//{
//	vector<int> v1;
//	v1.push_back(2);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//
//	//Ѱ�ҵ�һ������20����
//	vector<int>::iterator ret;
//	//ret = find_if(v1.begin(), v1.end(), myGreaterThan20);
//	ret = find_if(v1.begin(), v1.end(), MyGreaterThan20());
//	if (ret != v1.end())
//	{
//		cout << "Ѱ�ҵ�������Ϊ��" << *ret << endl;
//	}
//}
// //adjacent_find�㷨 ���������ظ�Ԫ��
//void test05()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(20);
//	v1.push_back(19);
//	v1.push_back(40);
//	v1.push_back(33);
//	vector<int>::iterator ret;
//	//������ͨ����   ����Ҫ�ص�����
//	ret = adjacent_find(v1.begin(), v1.end());
//	if (ret != v1.end())
//	{
//		cout << "Ѱ�ҵ��ظ������ݣ�" << *ret << endl;
//	}
//
//	vector<Person> v2;
//	v2.push_back(Person("���", 25));
//
//	v2.push_back(Person("����", 35));
//	v2.push_back(Person("��˹��³��", 29));
//	v2.push_back(Person("����", 35));
//	vector<Person>::iterator ret1;
//	ret1 = adjacent_find(v2.begin(), v2.end());
//	if (ret1 != v2.end())
//	{
//		cout << "Ѱ�ҵ��ظ������ݣ�" << (*ret1).name<<"   "<<(*ret1).age << endl;
//	}
//}
//void test06()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(40);
//	v1.push_back(49);
//	v1.push_back(50);
//	v1.push_back(53);
//	//���ֲ��ҷ�  ǰ������Ԫ�ر����������
//	bool ret = binary_search(v1.begin(), v1.end(), 40);
//	if (ret == true)
//	{
//		cout<<"�ҵ�"<<endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
////count�㷨  ͳ��Ԫ�س��ִ���
//void test07()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(40);
//	v1.push_back(49);
//	v1.push_back(50);
//	v1.push_back(33);
//
//	cout << count(v1.begin(), v1.end(), 33) << endl;//
//}
////count_if�㷨  ����Ԫ�ص�ƥ������ͳ��Ԫ�س��ֵĴ���
//bool myGreaterThan10(int val)
//{
//	return val > 10;
//}
//class MyGreaterThan10
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 10;
//	}
//};
//void test08()
//{
//	vector<int> v1;
//	v1.push_back(33);
//	v1.push_back(40);
//	v1.push_back(49);
//	v1.push_back(50);
//	v1.push_back(33);
//
//	cout << count(v1.begin(), v1.end(), 33) << endl;
//	//ʹ�ûص�����
//	cout << count_if(v1.begin(), v1.end(), myGreaterThan10) << endl;
//	//ʹ�÷º���
//	cout << count_if(v1.begin(), v1.end(), MyGreaterThan10() )<< endl;
//	//ʹ���ڽ�����
//	cout << count_if(v1.begin(), v1.end(), bind2nd(greater<int>(),33)) << endl;
//}
////���������㷨
////merge�㷨  ����Ԫ�غϲ������洢����һ�������У�ÿ��������������
//int main(int argc, char* argv[])
//{
//	test08();
//	return 0;
//}