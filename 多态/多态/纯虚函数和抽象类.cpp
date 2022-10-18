#include<iostream>
using namespace std;
//������  �ṩһ���̶�������  �ӿ�
class AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;
	//�涨����
	void MakeDrink() {
		this->Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
//��������
class Coffee :public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ��" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ��ȣ�" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "�����ȵ��뱭�У�" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "����ţ�̣�" << endl;
	}
};
//������ˮ
class Tea :public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "������ˮ��" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ��" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "����ˮ���뱭�У�" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "����ʳ�Σ�" << endl;
	}
};
//ҵ����
void DoBussiness(AbstractDrinking* drink) {
	drink->MakeDrink();
	delete drink;
}

void test01()
{
	//����  ����
	DoBussiness(new Coffee);

	//���� ��
	DoBussiness(new Tea);
}

int main(int argc, char* argv[])
{
	test01();
	return 0;
}