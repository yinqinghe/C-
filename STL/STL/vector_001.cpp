//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//void test01()
//{
//	vector<int> v;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		v.push_back(i);
//	cout << "v������capacity: " << v.capacity() << endl;
//	cout << "v�Ĵ�Сsize: " << v.size() << endl;//ʵ�ʴ�ŵ�Ԫ�ظ���
//}
//
//void test02()
//{
//	vector<int> v;
//	int* p = NULL;
//	int count = 0;//��¼��Ѱ��ַ�Ĵ���
//	
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//���p������&v[0] ˵����Ѱ���µĿռ�
//		{
//			count++;
//			p = &v[0];
//		}
//	}
//	cout << "��Ѱ��ַ�Ĵ�����" <<count<< endl;
//}
//
//void test03()
//{
//	vector<int> v;
//	int *a = NULL;
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		if (a != &v[0])
//		{
//			cout << "------------" << i << "------------" << endl;
//			a = &v[0];
//		}
//		
//		cout << "capacity= " << v.capacity() << ", size= " << v.size() << endl;
//	}
//}
//
///*
//  vector ���캯��
//vector<T> v;//����ģ��ʵ�����ʵ�֣� Ĭ�Ϲ��캯��
//vector(v.begin(),v.end());//��v(begin(),end())�����е�Ԫ�ؿ���������
//vector(n,elem);//���캯����n��elem����������
//vector(const vector &vec);//�������캯��
//*/
//void printVectorInt(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test04()
//{
//	//vector(n, elem);//���캯����n��elem����������
//	vector<int> v1(10, 5);
//	printVectorInt(v1);
//
//	//vector(v.begin(), v.end());//��v(begin(),end())�����е�Ԫ�ؿ���������
//	vector<int> v2(v1.begin() + 2, v1.end() - 2);
//	printVectorInt(v2);
//
//	vector<int> v3(v1);
//	printVectorInt(v3);
//
//}
//
///*
//     vector���ø�ֵ����
//assign(beg,end);//��[beg,end]�����е����ݿ�����ֵ������
//assign(n,elem);//��n��elem������ֵ����
//vector& operator=(const vector  &vec);//���صȺŲ�����
//swap(vec);//��vec�뱾���Ԫ�ػ���
//
//*/
//
//void printVectorInt(vector<const char*>& v)
//{
//	for (vector<const char*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//void test05()
//{
//	vector<int> v1(5, 10);
//	vector<int> v2;
//
//	//vector& operator=(const vector & vec);//���صȺŲ�����
//	v2 = v1;
//	printVectorInt(v2);
//
//	//assign(beg, end);//��[beg,end]�����е����ݿ�����ֵ������
//	vector<const char*> v3;
//	v3.assign(5, "Mike jordan");
//	printVectorInt(v3);
//
//	//assign(n, elem);//��n��elem������ֵ����
//	vector<const char*> v4;
//	v4.assign(v3.begin()+2, v3.end()-2);
//	printVectorInt(v4);
//
//	//
//	vector<int> v5(5, 20);
//	vector<int> v6(10, 40);
//	printVectorInt(v5);
//	printVectorInt(v6);
//	v5.swap(v6);
//
//	printVectorInt(v5);
//	printVectorInt(v6);
//}
///*
//         vector��С���� 
//size();//����������Ԫ�صĸ���
//empty();//�ж������Ƿ�Ϊ��
//resize(int num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ0�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num,elem);//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ��䡣���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//capacity();//����������
//reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
//
//*/
//void test06()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	if (v.empty())
//	{
//		cout << "v����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "�����ǿ�" << endl;
//		cout << "size = " << v.size() << endl;
//		cout << "capacity=" << v.capacity() << endl;
//		//����>=size
//	}
//	printVectorInt(v);//10  20 30  40
//	//resize(int num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ0�����λ�á�
//	v.resize(8);
//	printVectorInt(v);//10  20 30  40  0  0  0 0
//	cout << "size = " << v.size() << endl;
//	cout << "capacity=" << v.capacity() << endl;
//
//	//resize(int num, elem);//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ��䡣
//	v.resize(10, 12);
//	printVectorInt(v);
//	cout << "size = " << v.size() << endl << endl;
//	cout << "capacity=" << v.capacity() << endl;
//}
//void test07()
//{
//	vector<int> v;
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "size= " << v.size() << endl;
//	cout << "capacity = " << v.capacity() << endl;
//
//	//ʹ��resize���ռ�  �ó�10��Ԫ��()
//	v.resize(10);//
//	cout << "size = " << v.size() << endl;
//	cout << "capacity= " << v.capacity() << endl;
//
//	//ʹ��swap��������������
//	vector<int>(v).swap(v);
//
//	cout << "size = " << v.size() << endl;
//	cout << "capacity= " << v.capacity() << endl;
//}
////reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
//void test08()
//{
//	vector<int> v;
//
//	//
//	v.reserve(1024);//Ԥ���ռ�  1000��Ԫ��
//	int* p = NULL;
//	int count = 0;
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			count++;
//			p = &v[0];
//		}
//	}
//	cout << "������Ѱ�ռ������ " << count << endl;
//}
///*
//      vector  ���ݴ�ȡ����
//at(int idx);//��������idx��ָ�����ݣ����idxԽ��,�׳�out_of_range�쳣
//operator[];//��������idx��ָ�����ݣ�Խ��ʱ������ֱ�ӱ���
//front();//���������е�һ������Ԫ��
//back();//�������������һ������Ԫ��
//
//*/
//void test09()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	printVectorInt(v);
//	cout << v[2] << endl;//30   []  Խ��  ���׳��쳣
//	cout << v.at(2) << endl;//30   at  Խ��  �׳��쳣
//
//	cout << "front= " << v.front() << endl;//10
//	cout << "back = " << v.back() << endl;//40
//}
///*
//            vector�����ɾ������
//insert(const_iterator pos,int count,ele);//d������ָ��λ��pos����count��Ԫ��ele
//push_back(ele);//β������Ԫ��ele
//pop_back();//ɾ�����һ��Ԫ��
//erase(const_iterator start,const_iterator end);//ɾ����������start��end֮���Ԫ��
//erase(const_iterator pos);//ɾ��������ָ���Ԫ��
//clear();//ɾ������������Ԫ��
//*/
//void test10()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	printVectorInt(v);//   10  20   30 40
//
//	//insert(const_iterator pos, int count, ele);//d������ָ��λ��pos����count��Ԫ��ele
//	v.insert(v.begin() + 2, 3, 100);
//	printVectorInt(v);//  10   20  100   100   100  30   40
//
//	//pop_back();//ɾ�����һ��Ԫ��
//	v.pop_back();//40ɾ���ˣ�
//	printVectorInt(v);
//
//	//erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
//	v.erase(v.begin()+2,v.end()-3);
//	printVectorInt(v);//  10   20  100   100   100  30  
//
//	//erase(const_iterator pos);//ɾ��������ָ���Ԫ��
//	v.erase(v.begin() + 1);//ɾ��20��λ��
//	printVectorInt(v);//10  20
//	cout << "capacity= " << v.capacity() << ", size= " << v.size() << endl;
//
//	//clear();//ɾ������������Ԫ��
//	v.clear();
//	printVectorInt(v);
//	cout << "capacity= " << v.capacity() << ", size= " << v.size() << endl;
//}
//int main(int argc, char* argv[])
//{
//	test10();
//	return 0;
//}
