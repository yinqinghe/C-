//#include<iostream>
//#include<deque>
//#include<algorithm>
//#include<string>
//using namespace std;
////˫�˶�̬����
///*
//     deque���캯��
//deque<T> deqT;//Ĭ�Ϲ�����ʽ
//deque(beg,end);//���캯����[beg,end]�����е�Ԫ�ؿ���������
//deque(n,elem);//���캯����n��elem����������
//deque(const deque &deq);//�������캯��
//
//      deque��ֵ����
//assign(beg,end);//��[beg,end]�����е����ݿ�����ֵ������
//assign(n,elem);//��n��elem������ֵ������
//deque& operator=(const deque &deq);//���صȺŲ�����
//swap(deq);//��deq�뱾���Ԫ�ػ���
//*/
//void printDequeInt(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << "   ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d(5, 13);
//	printDequeInt(d);
//
//	//assign(n, elem);//��n��elem������ֵ������
//	deque<int> d1;
//	d1.assign(5, 99);
//	printDequeInt(d);
//
//	//deque& operator=(const deque & deq);//���صȺŲ�����
//	deque<int> d2;
//	d2 = d1;
//	printDequeInt(d);
//
//	//swap(deq);//��deq�뱾���Ԫ�ػ���
//	deque<int> d3(5, 102);
//	deque<int> d4(8, 98);
//	printDequeInt(d3);//102   102   102   102   102
//	printDequeInt(d4);//98   98   98   98   98   98   98   98
//	d3.swap(d4);
//	printDequeInt(d3);//98   98   98   98   98   98   98   98
//	printDequeInt(d4);//102   102   102   102   102
//
//}
///*
//       deque��С����
//deque.size();//����������Ԫ�صĸ���
//deque.empty();//�ж������Ƿ�Ϊ��
//deque.resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ0�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//deque.resize(num,elem);//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ��䡣���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//       
//	   deque˫�˲����ɾ������
//push_back(ele);//β������Ԫ��ele
//push_front(ele);//������β�����һ������
//pop_back();//ɾ�����һ��Ԫ��
//pop_front();//ɾ��������һ������
//
//       deque  ���ݴ�ȡ����
//at(int idx);//��������idx��ָ�����ݣ����idxԽ��,�׳�out_of_range�쳣
//operator[];//��������idx��ָ�����ݣ�Խ��ʱ������ֱ�ӱ���
//front();//���������е�һ������Ԫ��
//back();//�������������һ������Ԫ��
//*/
//void test02()
//{
//	deque<int> d;
//	//β������
//	d.push_back(19);
//	d.push_back(21);
//	d.push_back(22);
//
//	//ͷ������
//	d.push_front(11);
//	d.push_front(12);
//	d.push_front(13);
//	printDequeInt(d);//13   12   11   19   21   22
//
//	//ͷ��ɾ��
//	d.pop_front();//12   11   19   21   22
//	//β��ɾ��
//	d.pop_back();//12   11   19   21   
//	printDequeInt(d);//12   11   19   21   
//
//	if (d.empty())
//	{
//		cout << "d����Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d�����ǿ�" << endl;
//		cout << "size = " << d.size() << endl;//
//	}
//
//	//[]���ʵڶ���Ԫ��
//	cout << "d[2] = " << d[2] << endl;//19
//	cout << "d.at(2) = " << d.at(2) << endl;//19
//	cout << "ͷԪ�� = " << d.front() << endl;//12
//	cout << "βԪ��=" << d.back() << endl;//21
//}
///*
//          deque�������
//insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
//insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ
//insert(pos,beg,end);//��posλ�ò���[beg,end]��������ݣ��޷���ֵ��
//
//          dequeɾ������
//erase(const_iterator start,const_iterator end);//ɾ����������start��end֮���Ԫ��
//erase(const_iterator pos);//ɾ��������ָ���Ԫ��
//clear();//ɾ������������Ԫ��
//
//*/
//void test03()
//{
//	deque<int> d;
//	d.insert(d.begin(), 5, 100);
//	printDequeInt(d);
//
//	d.clear();
//	cout << "size = " << d.size() << endl;
//}
//int main(int argc, char* argv[])
//{
//	test03();
//	return 0;
//}