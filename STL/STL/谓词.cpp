//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<numeric>
//#include <functional>
//using namespace std;
////��ͨ������ΪһԪν��
//bool greaterThan20(int val)
//{
//	return val > 20;
//}
////�º�����ΪһԪν��
//class MyGreaterThan20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//	//�����ҳ���һ������20����
//	vector<int>::iterator ret;
//	//��ͨ�������
//	//ret = find_if(v.begin(), v.end(), greaterThan20);
//	ret = find_if(v.begin(), v.end(), MyGreaterThan20());
//	if (ret != v.end())
//	{
//		cout << "��һ������20����Ϊ��" << *ret << endl;
//	}
//
//
//}
////��ͨ������Ϊ��Ԫν��
//bool myGreater(int v1, int v2)
//{
//	//Ϊɶ�Ӵ�С   ����
//	return v1 > v2;
//}
////�º�����Ϊ��Ԫν��
//class MyGreater
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test02()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//	//�Ӵ�-->С����
//	//	sort(v.begin(), v.end(),myGreater );
//	sort(v.begin(), v.end(),MyGreater ());
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//}
//void test03()
//{
//	plus<int> p;
//	cout << p(10, 11)<< endl;
//	cout << plus<int>()(111,22) << endl;
//}
//void test04()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//	//ʹ���ڽ���������  �ı��������
//	sort(v.begin(), v.end(), greater<int>());
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//}
//void myPrint(int val, int tmp)
//{
//	cout << val + tmp << "   ";
//}
////val��for_each�ṩ  tmp
////������2�������̳�binary_function
////������3����������ȡ
////������4����operator��������const����
//class MyPrint :public binary_function<int, int, void>
//{
//public:
//	void operator()(int val, int tmp)const
//	{
//		cout << "val = " << val << "     tmp = " << tmp << endl;
//	}
//};
//void test05()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//������1��bind2nd��bind1st  �󶨲���
//	//for_each(v.begin(), v.end(), bind2nd(myPrint, 2000));
//	for_each(v.begin(), v.end(), bind2nd(MyPrint(), 2000));
//	cout << endl;
//
//	cout << "------------------------" << endl;
//	for_each(v.begin(), v.end(), bind1st(MyPrint(), 2000));
//	cout << endl;
//}
////ȡ��������2�������̳�unary_function
////ȡ��������3����������ȡ
////ȡ��������4����operator��������const����
//class MyGreaterThan3:public unary_function<int,bool>
//{
//public:
//	bool operator()(int val)const
//	{
//		return val > 3;
//	}
//};
//void test06()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	//�ҳ���һ������3����
//	vector<int>::iterator ret;
//	ret = find_if(v.begin(), v.end(), MyGreaterThan3());
//	if (ret != v.end())
//	{
//		cout << "*ret=" << *ret << endl;
//	}
//
//	//�ҳ���һ��С��3����
//	vector<int>::iterator ret1;
//	ret1 = find_if(v.begin(), v.end(), not1(MyGreaterThan3()));
//	if (ret != v.end())
//	{
//		cout << "*ret=" << *ret1 << endl;
//	}
//}
//class MyGreater01:public binary_function<int,int ,bool>
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//};
//void test07()
//{
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(20);
//	v.push_back(19);
//	v.push_back(40);
//	v.push_back(33);
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//
//	//Ĭ��С-->��
//	// sort(v.begin(),v.end());
//	// ������������-->С
//	// 	sort(v.begin(), v.end(), MyGreater());
//	//ʹ���ڽ���������  �ı��������
//	// ʹ��not2��MyGreaterInt()ȡ��   С-->��
//	//sort(v.begin(), v.end(), not2(MyGreater01()));
//	//ʹ��not2���ڽ�����ȡ��
//	sort(v.begin(), v.end(), not2(greater<int>()));
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//	cout << endl;
//	sort(v.begin(), v.end(), less<int>());
//
//	for_each(v.begin(), v.end(), [](int val) {
//		cout << val << "   ";
//		});
//}
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
//};
//void myPrintPerson(Person& ob)
//{
//	cout << "name = " << ob.name << ",age = " << ob.age << endl;
//}
//void test08()
//{
//	vector<Person> v;
//  v.push_back(Person("���", 25));
//	v.push_back(Person("����", 35));
//	v.push_back(Person("��˹��³��", 29));
//	v.push_back(Person("���˶�", 21));
//
//	//���� myPrintPerson��ͨ����
//	//for_each(v.begin(),v.end(),myPrintPerson);
//	//����   Person��Ա����
//	//����mem_fun_ref��Person�ڲ���Ա��������
//	for_each(v.begin(), v.end(), mem_fun_ref(&Person::showPerson));
//}
////��ͨ����  ��Ϊ������
//void myPrintInt01(int val,int p)
//{
//	cout << val+p << "   ";
//}
//void test09()
//{
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(20);
//	v.push_back(19);
//	v.push_back(40);
//	v.push_back(33);
//
//	//��ͨ����  ��Ҫʹ��ptr_funת���ɺ���������
//	for_each(v.begin(), v.end(),bind2nd(ptr_fun(myPrintInt01),1000));
//	cout << endl;
//
//}
//int main(int argc, char* argv[])
//{
//	test09();
//	return 0;
//}