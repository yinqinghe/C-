//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	//�麯��  ֻҪ�漰���̳�  ������ͬ������  �����麯��
//	virtual void sleep(void)
//	{
//		cout << "animal  ������˯��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	virtual void sleep(void)
//	{
//		cout << "Cat è��˯������ ����" << endl;
//	}
//};
//
//void test01()
//{
//	//�û��ָࣨ������ã�  ����  �����������ת����
//	Animal* p = new Cat;
//	p->sleep();//���õ��ǻ����sleep
//	Cat* pp = new Cat;
//	pp->sleep();
//
//	Cat cat;
//	Animal& ob = cat;
//	ob.sleep();//���õ��ǻ����sleep
//}
//void test02()
//{
//	//�û��ָࣨ������ã�  ����  �������,ͬʱ��Ҫ�������������Ա
//	Animal* p = new Cat;
//	p->sleep();//è��˯��
//}
//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}