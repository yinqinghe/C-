//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
///*
//string ���캯��
//string������//����һ���յ��ַ���  ����
//string��const string& str)//ʹ��һ��string�����ʼ����һ��string����
//string(const char* s)//ʹ���ַ���s��ʼ��
//string(int n,char c);//ʹ��n���ַ�c��ʼ��
//
//string������ֵ����
//string& operator=(const char* s);//char*�����ַ���  ��ֵ����ǰ���ַ���
//string& operator=(const string &s);//���ַ���s��ֵ����ǰ���ַ���
//string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
//string& assign(const char *s);//���ַ���s������ǰ���ַ���
//string& assign(const char *s,int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string &s);//���ַ���s������ǰ�ַ���
//string& assign(int n,char c);//��n���ַ�c������ǰ�ַ���
//string& assign(const string &s,int start,int n);//��s��start��ʼn��
//
//*/
//
//void test2()
//{
//	
//	//string������//����һ���յ��ַ���  ����
//	string str1;
//	cout << str1 << endl;
//	
//
//	//string(const char* s)//ʹ���ַ���s��ʼ��
//	string str2("hello string");
//	cout << str2 << endl;
//
//	string str4;
//	//string��const string& str)//ʹ��һ��string�����ʼ����һ��string����
//	str4 = str2;
//	cout << str4 << endl;
//
//
//	//string(int n, char c);//ʹ��n���ַ�c��ʼ��
//	string str3(10,'H');
//	cout << str3 << endl;
//
//	//string& operator=(const char* s);//char*�����ַ���  ��ֵ����ǰ���ַ���
//	string str5;
//	str5 = "hello str5";
//	cout << str5 << endl;
//
//
//	//string& operator=(const string & s);//���ַ���s��ֵ����ǰ���ַ���
//	str4 = str2;
//	cout << str4 << endl;
//
//	//string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
//	string str6;
//	str6 = 'H';
//	cout << str6 << endl;
//
//	//string& assign(const char* s);//���ַ���s������ǰ���ַ���
//	string str7;
//	str7.assign("hello str7");
//	cout << str7 << endl;
//
//	//string& assign(const char* s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
//	string str8;
//	str8.assign("hello str8", 5);
//	cout << str8 << endl;
//
//	//string& assign(const string & s);//���ַ���s������ǰ�ַ���
//	string str9;
//	str9.assign(str8);
//	cout << str9 << endl;
//
//	//string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
//	string str10;
//	str10.assign(10,'AKA');
//	cout << str10 << endl;
//
//	//string& assign(const string & s, int start, int n);//��s��start��ʼn��
//	string str11;
//	str11.assign("abcdefghijabcdefg", 1, 4);
//	cout << str11 << endl;
//
//}
///*
//string ��ȡ�ַ�����
//char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
//char& at(int n);//ͨ��at ������ȡ�ַ�
//
//*/
//
//void test02()
//{
//	string str1 = "hello string";
//	cout << str1[1] << endl;//'e'
//	cout << str1.at(1) << endl;//'e'
//
//	str1[1] = 'E';
//	cout << str1 << endl;//"hEllo string"
//	str1.at(7) = 'T';
//	cout << str1 << endl;//"hEllo sTring"
//
//	//[]��at ������
//	try
//	{
//		//str1[1000]='G';//Խ�� []���׳��쳣
//		str1.at(1000) = 'G';//Խ��  at���׳��쳣
//	}
//	catch (exception& e)
//	{
//		cout << "�쳣�� " << e.what() << endl;
//	}
//}
///*
//   string  ƴ�Ӳ���
//string& operator+=(const string& str);//����+=������
//string& operator+=(const char* str);//����+=������
//string& operator+=(const char c);//����+=������
//string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char *s,int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string &s);//ͬoperator+=����
//string& append(const string &s,int pos,int n);//���ַ���s�д�pos��ʼ��n ���ַ����ӵ���ǰ�ַ�����β
//string& append(int n,char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
//*/
//
//void test03()
//{
//	string str1 = "hello";
//	string str2 = "string";
//	//string& operator+=(const string& str);//����+=������
//	str1 += str2;
//	cout << str1 << endl;//"hello string"
//
//	string str3 = "app";
//	//string& operator+=(const char* str);//����+=������
//	str3 += "le";
//	cout << str3 << endl;//"apple"
//
//	string str4 = "hello";
//	//string& append(const char* s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//	str4.append("ing", 2);
//	cout << str4 << endl;
//
//	//string& append(const string & s, int pos, int n);//���ַ���s�д�pos��ʼ��n ���ַ����ӵ���ǰ�ַ�����β
//	string str5 = "hello";
//	string str6 = "qwertyu";
//	str5.append(str6, 4, 6);
//	cout << str5 << endl;//
//}
//
///*
//  string ���Һ��滻
//int find(const string& str,int pos=0) const;//����str��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s,int pos=0) const;//����s��һ�γ���λ�ã���pos ��ʼ����
//int find(const char* s,int pos=0,int n) const;//�� pos λ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c,int pos=0) const;//�����ַ�c��һ�γ���λ��
//int rfind(const string& str,int pos=npos) const;//����str���һ��λ�ã���pos��ʼ��ʼ����
//int rfind(const char* s,int pos=npos) const;//����S��� һ�γ���λ�ã���pos��ʼ����
//int rfind(const char* s,int pos,int n) const;//��Pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c,int pos=0) const;//�����ַ�c���һ�γ���λ��
//string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos,int n,const char* s);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s 
//*/
//
//void test04()
//{
//	//int find(const string & str, int pos = 0) const;//����str��һ�γ���λ�ã���pos��ʼ����
//	string str1 = "hehe:haha:xixi:haha:heihei";
//	//��str1����haha
//	string tmp = "haha";
//	cout << str1.find(tmp) << endl;//5
//	cout << str1.find(tmp, 10) << endl;//15
//
//	//int find(const char* s, int pos = 0) const;//����s��һ�γ���λ�ã���pos ��ʼ����
//	cout << str1.find("haha") << endl;
//
//	str1.replace(5, 4, "###");
//	cout << str1 << endl;
//
//	string str2 = "www.sex.117114.sex.person.77.com";
//	//
//	while (1)
//	{
//		int ret = str2.find("sex");
//		if (ret > str2.size())//
//			break;
//		str2.replace(ret, strlen("sex"), "***");
//
//	}
//	cout << str2 << endl;
//}
///*
//   string�Ƚϲ���
//compare������>ʱ����-1��==ʱ����0.
//�Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС��
//��д��A��Сд��aС��
//
//int compare(const string& s) const;//
//int compare(const char *s)const;//���ַ����Ƚ�
//
//*/
//void test05()
//{
//	string str1 = "hehe";
//	string str2 = "haha";
//	cout << str1.compare(str2) << endl;//1
//	cout << str1.compare("lala") << endl;//-1
//	cout << str1.compare("hehen") << endl;//0
//}
//
///*
//  string ��ȡ�ַ���
//string substr(int pos=0,int n=npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���
//
//*/
//void test06()
//{
//	string str1 = "hehe:haha:xixi:haha:heihei";
//	//cout << str1.substr(5, 4) << endl;
//
//	//
//	int pos = 0;
//	while (1)
//	{
//		int ret = str1.find(":", pos);
//		if (ret < 0)
//		{
//			string tmp = str1.substr(pos, str1.size() - pos);
//			cout << tmp << endl;
//			break;
//		}
//		
//		string tmp = str1.substr(pos, ret - pos);
//		cout << tmp << endl;
//
//		pos = ret + 1;
//	}
//}
//
///*
//    string �����ɾ������
//string& insert(int pos,const char* s);//�����ַ���
//string& insert(int pos,const string& str);//�����ַ���
//string& insert(int pos,int n,char c);//��ָ��λ�ò���n���ַ�c
//string& erase(int pos,int n=npos);//ɾ����Pos��ʼ��n���ַ�
//
//*/
//void test07()
//{
//	string str1 = "hello world";
//	str1.insert(5, "hehe");
//	cout << str1 << endl;
//
//	str1.erase(5, 4);//ɾ���ַ�����hehe
//	cout << str1 << endl;//��hello world"
//	
//	//����ַ���  str1.size()�õ��ַ��� ���ܴ�С
//	str1.erase(0, str1.size());
//	cout << str1 << endl;
//}
//
//void test08()
//{
//	string str1;//����
//	 const char* str2 = "hello str";
//	 
//	 //��char* ת��  string  (ֱ����ɣ�
//	 str1 = str2;
//	 cout << str1 << endl;//hello str
//	 
//	 string str3 = "hello str3";
//	 //����ֱ�ӽ�stringת����  char*  �������string�е�c_str�������
//	 //char *str4=str3;//err
//	 char* str4 = const_cast<char*> (str3.c_str());
//	 cout << str4 << endl;//
//}
//
//void test09()
//{
//	vector<int> v;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		v.push_back(i);
//	cout << "v������capacity: " << v.capacity() << endl;
//	cout << "v�Ĵ�Сsize: " << v.size() << endl;//ʵ�ʴ�ŵ�Ԫ�ظ���
//}
//int main(int argc, char* argv[])
//{
//	test09();
//	return 0;
//}