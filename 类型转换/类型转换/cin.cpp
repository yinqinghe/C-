#include<iostream>

using namespace std;
//1.cin.get��ȡһ���ַ�  cin.getline��ȡ���ո���ַ���
void test01()
{
	int data = 0;
	cin >> data;
	cout << "data =" << data << endl;

	char ch;
	cin >> ch;
	cout << "ch=" << ch << endl;

	//��ȡһ���ַ�
	char ch1 = '/0';
	ch1 = cin.get();//��ȡһ���ַ�
	cout << "ch1=" << ch1 << endl;

	//char name[128] = "";
	//cin >> name;//�����ո�  �س�������ȡ
	//cout << "name=" << name << endl;

	char name[128] = "";
	cin.getline(name, sizeof(name));//���Ի�ȡ���ո���ַ���
	cout << "name=" << name << endl;
}
//2.cin.ignore����  ��������ǰn���ַ�
void test02()
{
	char name[128] = "";
	cin.ignore(2);//����ǰ2�ֽ�
	cin >> name;
	cout << "name= " << name << endl;
}
//3.cin.putback�Żػ�����
void test03()
{
	char ch = 0;
	ch = cin.get();
	cout << "ch= " << ch << endl;
	cin.putback(ch);//��ch���ַ��Żػ�����

	char name[32] = "";
	cin >> name;
	cout << "name= " << name << endl;
}
//4.cin.peek͵��
void test04()
{
	char ch = 0;
	ch = cin.peek();
	cout << "͵��������������Ϊ��" <<ch<< endl;

	char name[32] = "";
	cin >> name;
	cout << "name = " << name << endl;
}
int main(int argc, char* argv[])
{
	test04();
	return 0;
}