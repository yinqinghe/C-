//#include<iostream>
//
//using namespace std;
//
//class Person
//{
//private:
//	int num;
//public:
//
//	Person(int num):num(num)//��this->������ͬ
//	{
//		//this->num = num;
//		cout << "�вι��캯��num=" <<num<< endl;
//	}
//	~Person()
//	{
//		cout << "��������num=" <<num<< endl;
//	}
//public:
//	void showPerson(void)
//	{
//		cout << "num = " << num << endl;
//	}
//};
//
////���һ������ָ��  ��� Person new���Ķ����ռ�  �ͷ�����
//class SmartPointer
//{
//public:
//	Person* pPerson;
//public:
//	SmartPointer(Person* p)
//	{
//		pPerson = p;
//
//	}
//	~SmartPointer()
//	{
//		if (pPerson != NULL)
//		{
//			delete pPerson;
//			pPerson = NULL;
//		}
//	}
//public:
//	//��Ա��������->�����
//	Person* operator->()
//	{
//		return this->pPerson;
//	}
//
//	//��Ա����  ���� *����
//	Person& operator*()
//	{
//		return *(this->pPerson);
//	}
//};
//
//void test01()
//{
//	//Person ob(100);
//	//ob.showPerson();
//
//	Person* p = new Person(100);
//	p->showPerson();
//	
//	//�������� delete p   ʹ������ָ����
//	//delete p;
//
//	//�����Զ��İ����ͷ�  �����ռ䣨��������ָ��ĸ��
//	SmartPointer pointer(new Person(200));
//
//	//����Person���е�showPerson()
//	//pointer.pPerson->showPerson();
//
//	//(pointer.operator->())->showPerson();
//	//�������������ʵ������ָ����Ĺ���
//	pointer->showPerson();
//
//	(*pointer).showPerson();
//
//
//}
//
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}