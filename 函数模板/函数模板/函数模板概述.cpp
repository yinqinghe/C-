//#include<iostream>
//using namespace std;
//void swapInt(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//	return;
//}
//void swapChar(char& a, char& b)
//{
//	char tmp = a;
//	a = b;
//	b = tmp;
//	return;
//}
//
//void myswap(int a, int b)
//{
//	cout << "��ͨ����" << endl;
//	int tmp = a;
//	a = b;
//	b = tmp;
//	return;
//
//}
////����ģ��  template�ǹؼ���
////class�� typenameһ����
////T  ϵͳ�Զ��Ƶ� ��  �û�ָ��
//template<typename T>
//void myswap(T a, T b)
//{
//	cout << "����ģ��" << endl;
//	T tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void test01()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ",data2= " <<data2<< endl;
//	swapInt(data1, data2);
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//
//
//	char data3 = 'a', data4 = 'b';
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//	swapChar(data3, data4);
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//}
//void test02()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//	myswap(data1, data2);//�Զ��Ƶ���TΪint
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//
//
//	char data3 = 'a', data4 = 'b';
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//	myswap(data3, data4);//�Զ��Ƶ���TΪchar
//	cout << "data3=" << data3 << ",data4= " << data4 << endl;
//}
//void test03()
//{
//	int data1 = 10, data2 = 20;
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//	//�û���ʾָ��  TΪint
//	myswap<int>(data1, data2);
//	cout << "data1=" << data1 << ",data2= " << data2 << endl;
//}
//
////����ģ��ĵ���ʱ��
//void test04()
//{
//	int a = 10;
//	char b = 'b';
//
//	//Ĭ������ѡ����ͨ����
//	myswap(a,a);
//
//	//ѡ����ģ��
//	myswap<>(a, a);
//
//	//����ģ�� �Ĳ�������  �����Զ�����ת��
//	//myswap<>(a, b);
//
//	//����ģ�� �Ĳ�������  ���Զ�����ת��
//	myswap(a, b);
//
//	//�û�  ָ��T������
//	myswap<int>(a, b);
//}
//
//int main(int argc, char* argv[])
//{
//	test04();
//	return 0;
//}