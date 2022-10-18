#include<iostream>

using namespace std;
//Person����ǰ����
template<class T1, class T2> class Person;
//��ǰ��������ģ��  ���߱�����printPerson02����ģ���Ǵ���
template<class T1, class T2> void printPerson02(Person<T1, T2>& ob);

template<class T1,class T2>
class Person {
private:
	T1 name;
	T2 age;
public:
	Person(T1 name, T2 age);
	//1.��Ԫ���������ж��壨��Ԫ�����ڸ����Ա������
	friend void printPerson01(Person<T1, T2>& ob)
	{
		cout << "name=  " << ob.name << ", age = " << ob.age << endl;
	}
	//1.��Ԫ���������ⶨ��  ������߱�����  ����Ԫ������ģ�庯��
	friend void printPerson02<>(Person<T1, T2>& ob);
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
	this->name = name;
	this->age = age;
}

int main(int argc, char* argv[])
{
	Person<string, int> ob("ccc", 55);
	//ͨ����Ԫ  ������ģ���е�����
	printPerson02(ob);
	return 0;
}

template<class T1, class T2>
void printPerson02(Person<T1, T2>& ob)
{
	cout << "name=  " << ob.name << ", age = " << ob.age << endl;
}
