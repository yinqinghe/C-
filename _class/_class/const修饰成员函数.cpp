//#include<iostream>
//using namespace std;
//class Data
//{
//private:
//	int data;
//	mutable int num;
//public:
//	void myPrintData(void) const 
//	{
//		//data = 1000;//err const���κ��� �������ܲ�����ͨ��Ա����
//		cout << this->data << endl;
//		//��const���κ���������£�mutable���εĳ�Ա���� �����޸�
//		num = 200;
//	}
//	//��������Ϊ ��ͨ��Ա���� �����޸ĳ�Ա�����Ŀ���
//	void setData(int data) const 
//	{
//		//this->data = data;
//		return;
//	}
//	Data()
//	{
//		cout << "�޲ι���" << endl;
//	}
//	Data(int data)
//	{
//		this->data = data;
//		cout << "�вι���" << endl;
//	}
//	Data(const Data& ob)
//	{
//		this->data = ob.data;
//		cout << "��������" << endl;
//	}
//	~Data()
//	{
//		cout << "��������" << endl;
//	}
//};
//void test03()
//{
//	//������
//	const Data ob1(200);
//
//	//������ ֻ�ܵ���const���εĺ���
//	ob1.setData(200000);
//	ob1.myPrintData();
//}
//void test02()
//{
//	Data ob1(100);
//	ob1.myPrintData();
//}
//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}