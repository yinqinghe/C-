//#include<iostream>
//
//using namespace std;
//
//class Data
//{
//	friend ostream& operator<<(ostream& out, Data& ob);
//private:
//	int a;
//	int b;
//public:
//	Data()
//	{
//		cout << "�޲εĹ��캯��" << endl;
//		a = 0;
//		b = 0;
//	}
//	Data(int a, int b)
//	{
//		cout << "�вι��캯��" << endl;
//		this->a = a;
//		this->b = b;
//	}
//	~Data()
//	{
//		cout << "��������" << endl;
//	}
//public:
//	void showData(void)
//	{
//		cout << "a= " << a << ",b=" << b<<endl;
//	}
//
//
//	//��Ա����  ����ǰ��++  ++ob1   (�ȼ�   ��ʹ�ã�
//	//������  Ĭ��ʶ��  operator++(a)  //����a������this����  �Ӷ�����  operator++()
//
//	Data& operator++()//++ob1
//	{
//		//�ȼ�
//		a++;//this->a=this->a+1;
//		b++;//this->b=this->b+1;
//		//��ʹ��
//		return *this;
//	}
//	//��Ա����  ���غ���++  ob1++   (��ʹ��   ��ӣ�
//    //������  Ĭ��ʶ��  operator++(a,int)  //����a������this����  �Ӷ�����  operator++(int)
//	Data operator++(int)//ob1++
//	{
//		//��ʹ��(���ݼ�֮ǰ��ֵ��
//		Data old = *this;
//
//		//���
//		a++;
//		b++;
//
//		return old;
//	}
//
//
//
//	//��Ա����  ����ǰ��--  --ob3   (�ȼ�   ��ʹ�ã�
//	//������  Ĭ��ʶ��  operator--(a)  //����a������this����  �Ӷ�����  operator--()
//
//	Data& operator--()
//	{
//		//�ȼ�
//		a--;
//		b--;
//
//		//��ʹ�ã����أ�
//		return *this;
//	}
//	//��Ա����  ���غ���--  ob4--   (��ʹ��   ��ӣ�
//	//������  Ĭ��ʶ��  operator--(a,int)  //����a������this����  �Ӷ�����  operator--(int)
//	Data& operator--(int)
//	{
//		//��ʹ��
//		Data old = *this;
//
//		//�ټ�
//		a--;
//		b--;
//
//		return old;
//	}
//};
//ostream& operator<<(ostream& out, Data& ob)
//{
//	out << "a=" << ob.a << ",b=" << ob.b;
//	return out;
//}
//void test01()
//{
//	Data ob1(10, 20);
//	ob1.showData();
//	
//	//����<<ֱ������Զ�������ֵ
//	//operator<<(cout,ob1)
//	cout << ob1 << endl;
//
//	//��Ա���� ���� ++�����
//	cout << ++ob1 << endl;
//
//	Data ob2(10, 20);
//	cout << "����++��" << ob2 << endl;
//	cout <<"����++��"<< ob2 ++<< endl;
//	cout <<"����++��"<< ob2 << endl;
//
//	//��Ա���� ���� --�����
//	Data ob3(10, 20);
//	cout << "ob3:  " << ob3 << endl;
//	cout << --ob3 << endl;
//
//	Data ob4(100, 200);
//	cout << "ob4:  " << ob4 << endl;
//	cout << ob4-- << endl;
//	cout << "ob4:  " << ob4 << endl;
//
//	//++ob1
//}
//int main(int argc, char* argv[])
//{
//	test01();
//	return 0;
//}