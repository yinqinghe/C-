#include<iostream>
#include"MyArray.h"
using namespace std;


int main(int argc, char* argv[])
{
	MyArray arr1;
	cout << "������" << arr1.getCapacity() << endl;
	cout << "��С��" << arr1.getSize() << endl;

	MyArray arr2(50);
	cout << "������" << arr2.getCapacity() << endl;
	cout << "��С��" << arr2.getSize() << endl;

	//�������в���20������
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		arr2.pushBack(i);
	}
	cout << "������" << arr2.getCapacity() << endl;
	cout << "��С��" << arr2.getSize() << endl;


	//��������
	arr2.printMyArray();

	//����pos=9��ֵ  2000
	arr2.setData(9, 2000);
	arr2.printMyArray();

	//�õ��±�Ϊ9��ֵ
	cout << arr2.getData(9)<<endl;
	return 0;
}