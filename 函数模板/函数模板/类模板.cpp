//#include<iostream>
//using namespace std;
//
//template<class T1,class T2>
//class Data
//{
//	friend void addData(Data<string, int>& ob);
//private:
//	T1 name;
//	T2 num;
//public:
//	Data(T1 name, T2 num)
//	{
//		this->name = name;
//		this->num = num;
//		cout << "�вι���" << endl;
//	}
//	~Data()
//	{
//		cout << "��������" << endl;
//	}
//	void showData()
//	{
//		cout << "name=" << this->name << ", num=" << this->num << endl;
//	}
//};
//
//void addData(Data<string, int>& ob)
//{
//	cout << "��ͨ����" << endl;
//	ob.name += "_vip";
//	ob.num += 2000;
//	return;
//}
//template<class T>
//void addData(T& ob)
//{
//	cout << "����ģ��" << endl;
//	ob.name += "_vip";
//	ob.num += 2000;
//	return;
//}
//void test02()
//{
//	Data<string, int> ob("��������", 18);
//	addData(ob);
//	ob.showData();
//}
//void test01()
//{
//	//Data ob1("��������");//err   ��ģ�岻����  �����Ƶ�
//	Data<string, int> ob1("��������", 100);
//	ob1.showData();
//	Data<int, string> ob2(150, "���˶�");
//	ob2.showData();
//	Data<string, string> ob3("��������", "mike");
//	ob3.showData();
//	Data<int, int> ob4(666, 100);
//	ob4.showData();
//}
//
//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}