//#include<iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	int a;
//private:
//	int b;
//protected:
//	int c;
//};
////���м̳�
//class Son1 :public Base
//{
//private:
//public:
//	//�����е�public����  ��������  Ҳ��public
//	//�����е�private���� ��������  �ǲ��ɼ���
//	//�����е�protected���� ��������  ��protectedd
//	// ������ڲ�
//	//
//	void showbase() {
//		a = 100;//�����ڲ��ɷ���
//		b = 1;//����ֱ�ӷ���
//		c = 1;//�����ڲ��ɷ���
//	}
//};
//void test01()
//{
//	Son1 ob;
//	ob.a;//������ɷ���
//	ob.b;//�����ⲻ�ɷ���
//	ob.c;//�����ⲻ�ɷ���
//
//}
////˽�м̳�
//class Son1 :private Base
//{
//private:
//public:
//	//�����е�public����  ��������  Ҳ��private
//	//�����е�private���� ��������  �ǲ��ɼ���
//	//�����protected���� ��������  ��private
//	// ������ڲ�
//	//
//	void showbase() {
//		a = 100;//�����ڲ��ɷ���
//		b = 1;//����ֱ�ӷ���
//		c = 1;//�����ڲ��ɷ���
//	}
//};
// void test02()
//{
//	Son1 ob;
//	ob.a;//�����ⲻ�ɷ���
//	ob.b;//�����ⲻ�ɷ���
//	ob.c;//�����ⲻ�ɷ���
//
//}
////�����̳�
//class Son1 :protected Base
//{
//private:
//public:
//  //�����е�public����  ��������  Ҳ��protected
//	//�����е�private���� ��������  �ǲ��ɼ���
//	//�����protected���� ��������  ��protectedd
//	// ������ڲ�
//	void showbase() {
//		a = 100;//�����ڲ��ɷ���
//		b = 1;//����ֱ�ӷ���
//		c = 1;//�����ڲ��ɷ���
//	}
//};
//void test03()
//{
//	Son1 ob;
//	ob.a;//�����ⲻ�ɷ���
//	ob.b;//�����ⲻ�ɷ���
//	ob.c;//�����ⲻ�ɷ���
//
//}

//int main(int argc, char* argv[])
//{
//	test02();
//	return 0;
//}