//#include<iostream>
//using namespace std;
//
//template<class T>
//class Base {
//private:
//	T num;
//public:
//	Base(T num)
//	{
//		cout << "�вι���" << endl;
//		this->num = num;
//	}
//	~Base()
//	{
//		cout << "��������" << endl;
//	}
//	void showNum(void)
//	{
//		cout << num << endl;
//	}
//};
//
////��ģ��   ����  ��ͨ��  ָ��T����
//class Son1 :public Base<int> {
//public:
//	Son1(int a) :Base<int>(a)
//	{
//		cout << "Son1�Ĺ��캯��" << endl;
//	}
//};
//class Son2 :public Base<string> {
//public:
//	Son2(string a) :Base<string>(a)
//	{
//		cout << "Son2�Ĺ��캯��" << endl;
//	}
//};
//int main(int argc, char* argv[])
//{
//	Son1 ob1(100);
//	ob1.showNum();
//
//	Son2 ob2("������Դ");
//	ob2.showNum();
//
//	return 0;
//}