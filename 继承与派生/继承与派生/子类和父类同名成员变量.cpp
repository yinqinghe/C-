//#include<iostream>
//
//using namespace std;
//class Base
//{
//private:
//	int num;
//public:
//	Base(int num)
//	{
//		this->num = num;
//		cout << "Base�вι���int" << endl;
//	}
//	~Base()
//	{
//		cout << "��������" << endl;
//	}
//};
//
//class Son :public Base
//{
//private:
//	int num;
//public:
//	Son(int num1, int num2) :Base(num1)
//	{
//		this->num = num2;
//		cout << "�вι���int int" << endl;
//	}
//	~Son()
//	{
//		cout << "��������" << endl;
//	}
//	void showNum(void)
//	{
//		//�� ���������  ��Ա����ͬ��ʱ ������ͽ�ԭ��  ѡ��������������Ա
//		//�����������  ����ʹ�ø����е�ͬ����Ա  ������ϸ����������
//		cout << "�����е�num=" << Base::num << endl;
//		cout << "�����е�num=" << num << endl;
//	}
//};
//void test01()
//{
//	Son ob1(010, 20);
//	ob1.showNum();
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}