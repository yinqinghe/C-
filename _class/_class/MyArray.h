#pragma once
class MyArray
{
private:
	int capacity;//���������  ����Ԫ�ظ���
	int size;//����ʵ�ʴ�ŵ�Ԫ�ظ���
	int* addr;//������Ԫ�ص�ַ
public:
	MyArray();
	MyArray(int capacity);
	~MyArray();

	//�������β����������
	void pushBack(int data);
	//���ָ��λ�õ�����
	int getData(int pos);
	//�޸�ָ��λ�õ�����
	void setData(int pos, int data);
	//��ȡ������������ܴ�ŵ����Ԫ�ظ�����
	int getCapacity(void);
	//��ȡ�����ʵ�ʴ�С��ʵ��Ԫ�صĸ�����
	int getSize(void);
	void printMyArray();
};

